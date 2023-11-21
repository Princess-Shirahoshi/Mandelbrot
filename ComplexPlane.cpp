#include "ComplexPlane.h"
#include <SFML/Graphics/VertexArray.hpp>


ComplexPlane::ComplexPlane(int pixelWidth, int pixelHeight)
{
  m_pixel_size.x = pixelWidth;
  m_pixel_size.y = pixelHeight;

  // m_aspectRatio is already defined as a float 
  // we can also try static_cast<double>
  m_aspectRatio = float(pixelHeight) / float(pixelWidth);

  m_plane_center.x = 0;
  m_plane_center.y = 0;

  m_plane_size.x = BASE_WIDTH;
  m_plane_size.y = (BASE_HEIGHT * m_aspectRatio);

  m_zoomCount = 0;

  // To be ready for the initial screen
  // Initial State really
  m_state = State::CALCULATING;

  // I am having the hardest time to get this to work 
  // I checked the documentation and this should be accurate, but like what the heck is wrong
  // Points seems to work and sf::Points
  m_vArray.setPrimitiveType(Points);

  // Fit the window basically here
  m_vArray.resize(pixelWidth * pixelHeight);

  // Displaying here
  updateRender();
}


void ComplexPlane::draw(RenderTarget& target, RenderStates states)
{
  // Draw the Vertex Array
  // Like the Professor's really cool rainbow line thing from class
  target.draw(m_vArray);
}


void zoomIn()
{
  double zoomIn_x;
  double zoomIn_y;

  //m_zoomCount from private
  m_zoomCount = m_zoomCount + 1;
  zoomIn_x = BASE_WIDTH * (pow(BASE_ZOOM, m_zoomCount));
  zoomIn_y = (BASE_HEIGHT * m_aspectRatio) * (pow(BASE_ZOOM, m_zoomCount));

  m_plane_size.x = zoomIn_x;
  m_plane_size.y = zoomIn_y;

  m_state = CALCULATING;
}


void zoomOut()
{
  double zoomIn_x;
  double zoomIn_y;

  //m_zoomCount from private
  m_zoomCount = m_zoomCount - 1;
  zoomIn_x = BASE_WIDTH * (pow(BASE_ZOOM, m_zoomCount));
  zoomIn_y = (BASE_HEIGHT * m_aspectRatio) * (pow(BASE_ZOOM, m_zoomCount));

  m_plane_size.x = zoomIn_x;
  m_plane_size.y = zoomIn_y;

  m_state = CALCULATING;
}
        void setcenter(Vector2i mousePixel);
        void setMouseLocation(Vector2i mousePixel);
        void loadText(Text& text);
        void updateRender();