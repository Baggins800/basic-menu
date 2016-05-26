#ifndef GLBUTTON_H
#define GLBUTTON_H
#include <QOpenGLFunctions>
#include <QOpenGLWidget>
class QOpenGLShaderProgram;
class QMouseEvent;
class glbutton : public QOpenGLWidget {
  Q_OBJECT
  public:
    glbutton(QWidget * parent = 0);
    void update();
    void mouse_clicked(QMouseEvent * event);
    void paintGL();
  signals:
    void left_clicked();
  private:
    QOpenGLShaderProgram * shader;
};

#endif // GLBUTTON_H
