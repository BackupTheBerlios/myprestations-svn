#ifndef __MONTHREAD_H__
#define __MONTHREAD_H__

#include <qthread.h>

class MonThread : public QThread {
	Q_OBJECT
	public:
		MonThread();
		void stop();
		virtual void run();
		bool stopped;
	signals:
		void pseudoclick();
		

};




#endif // __MONTHREAD_H__
