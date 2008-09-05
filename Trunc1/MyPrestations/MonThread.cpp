#include "MonThread.h"

MonThread::MonThread(){
	stopped = false;
}

void MonThread::run()
    {	stopped = false;
        while (!stopped) {
            sleep( 1 );
            qDebug( "Ping!" );
            emit pseudoclick();
        }
    }
    
void MonThread::stop(){
	stopped = true;

}
