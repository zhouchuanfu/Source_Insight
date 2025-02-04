
基础路径设置:
//basePath = 

/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\android\study\Macro_android_api.h \[1.1\] synchronized--------同步锁
Save:node\android\study\Macro_android_api.h \[1.2\] Lock----------------同步锁
Save:node\android\study\Macro_android_api.h \[1.3\] volatile 
Save:node\android\study\Macro_android_api.h \[1.4\] @synchronized-------同步锁(kotlin)
Save:node\android\study\Macro_android_api.h \[1.5\] lock----------------同步锁(kotlin)
Save:node\android\study\Macro_android_api.h \[1.6\] Conclusion
Save:node\android\study\Macro_android_api.h \[1.7\] Lock、Condition
Save:node\android\study\Macro_android_api.h \[1.8\] 
Save:node\android\study\Macro_android_api.h \[1.9\] 
Save:node\android\study\Macro_android_api.h \[1.10\] 
Save:node\android\study\Macro_android_api.h \[1.11\] 
Save:node\android\study\Macro_android_api.h \[1.12\] 
//
Save:node\android\study\Macro_android_api.h \[2.1\] 
Save:node\android\study\Macro_android_api.h \[2.2\] 
Save:node\android\study\Macro_android_api.h \[2.3\] 
Save:node\android\study\Macro_android_api.h \[2.4\] 
Save:node\android\study\Macro_android_api.h \[2.5\] 
Save:node\android\study\Macro_android_api.h \[2.6\] 
Save:node\android\study\Macro_android_api.h \[2.7\] 
Save:node\android\study\Macro_android_api.h \[2.8\] 
Save:node\android\study\Macro_android_api.h \[2.9\] 
Save:node\android\study\Macro_android_api.h \[2.10\] 
Save:node\android\study\Macro_android_api.h \[2.11\] 
Save:node\android\study\Macro_android_api.h \[2.12\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] synchronized--------同步锁
private synchronized void writeLog() {
    for (int i = 0; i < 3; i++) {
        try {
            Log.e(TAG, "showLog: " + Thread.currentThread().getName() + "写入中");
            Thread.sleep(new Random().nextInt(1000));
            Log.e(TAG, "showLog: " + Thread.currentThread().getName() + "写入完成");
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}

private void readLog() {
    synchronized (this) {
        for (int i = 0; i < 3; i++) {
            try {
                Log.e(TAG, "showLog: " + Thread.currentThread().getName() + "读取中");
                Thread.sleep(new Random().nextInt(1000));
                Log.e(TAG, "showLog: " + Thread.currentThread().getName() + "读取完成");
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}



[1.2] Lock----------------同步锁
//
private Lock lock = new ReentrantLock();

private void writeLog() {
    for (int i = 0; i < 3; i++) {
        try {
            //
            lock.lock();
            //xx
        } catch (InterruptedException e) {
            e.printStackTrace();
            Log.e(TAG, "writeLog: " + lock.tryLock());
        } finally {
            //
            lock.unlock();
        }
    }
}




[1.3] 




[1.4] @synchronized-------同步锁(kotlin)
@Synchronized fun synchronizedMethod() {
    println("inside a synchronized method:${Thread.currentThread()}")
}




[1.5] lock----------------同步锁(kotlin)

private val lock = java.lang.Object()

fun produce() = synchronized(lock) {
    while(items>=maxItems) { 
        lock.wait()
    }
    Thread.sleep(rand.nextInt(100).toLong())
    items++
    println("Produced, count is$items:${Thread.currentThread()}")
    lock.notifyAll()
}

fun consume() = synchronized(lock) {
    while(items<=0) {
        lock.wait()
    }
    Thread.sleep(rand.nextInt(100).toLong())
    items--
    println("Consumed, count is$items:${Thread.currentThread()}")
    lock.notifyAll()
}




[1.6] Conclusion




[1.7] Lock、Condition




[1.8] 




[1.9] 




[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



[2.1] 


[2.2] 


[2.3] 


[2.4] 


[2.5] 


[2.6] 


[2.7] 


[2.8] 


[2.9] 


[2.10] 



[2.11] 


[2.12] 


[2.13] 


[2.14] 


[2.15] 





