#include <QMouseEvent>
#include <QOpenGLShaderProgram>
#include "glbutton.h"

glbutton::glbutton(QWidget * parent) : QOpenGLWidget(parent) {
  this->shader = new QOpenGLShaderProgram(this);
}

void glbutton::mouse_clicked(QMouseEvent * event) {
  if (event->button() == Qt::LeftButton) {
    emit left_clicked();
  }
}

void glbutton::paintGL() {
    glClearColor(1.0, 0.0, 1.0, 1.0);
}
void glbutton::update() {

    if ( !this->shader->isLinked() ) {
      qDebug() << "Vertex Shader added: "
               << this->shader->addShaderFromSourceFile(QOpenGLShader::Vertex,
                                                        ":/button/shaders/buttons.vsh");
      // load the pixel/fragment shader.
      // this is the pixel shader (per pixel rendering)
      qDebug() << "Pixel Shader added:"
               << this->shader->addShaderFromSourceFile(QOpenGLShader::Fragment,
                                                        ":/button/shaders/buttons.fsh");
      this->shader->link();
    }
}
