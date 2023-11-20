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
  m_state = State::CALCULATING;

  m_vArray.setPrimitiveType(Points);
  m_vArray.resize(pixelWidth * pixelHeight);
}