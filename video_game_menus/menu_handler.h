#ifndef MENU_HANDLER_H
#define MENU_HANDLER_H

#include <QObject>
#include <QOpenGLWidget>

class QTimer;
class QMouseEvent;
class glbutton;
enum game_states {SPLASH = 0, MENU, GAME};
class menu_handler : public QOpenGLWidget
{
    Q_OBJECT
public:
    menu_handler(QWidget *parent = 0);
protected:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();
    void mouseMoveEvent(QMouseEvent *event);
private slots:
    void updateGL();


private:
    game_states current_state;
    QTimer * timer;
    double vsync;
    int mouse_x, mouse_y;
    glbutton * button;
};

#endif // MENU_HANDLER_H
