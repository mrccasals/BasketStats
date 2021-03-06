#include "ui_MyForm.h"
#include <QKeyEvent>

class MyForm: public QWidget
{
	Q_OBJECT

	protected:
		virtual void keyPressEvent(QKeyEvent *event);

	public:
		MyForm(QWidget *parent = 0);	

	signals:
		void addPointsHome(int n);
		void addPointsGuest(int n);
		void paintHome(bool b);
		void paintGuest(bool b);
		void nextQuarter();
		void addFoulHome();
		void addFoulGuest();
	private:
		Ui::MyForm ui;
		int setTeam;
};
