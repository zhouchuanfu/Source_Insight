
基础路径设置:
//basePath = 

/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\android\study\Macro_android_note.h \[1.1\] 设置全屏显示
Save:node\android\study\Macro_android_note.h \[1.2\] 沉浸式状态栏
Save:node\android\study\Macro_android_note.h \[1.3\] 沉浸式状态栏全屏
Save:node\android\study\Macro_android_note.h \[1.4\] 启动模式
Save:node\android\study\Macro_android_note.h \[1.5\] 函数注释
Save:node\android\study\Macro_android_note.h \[1.6\] Observer
Save:node\android\study\Macro_android_note.h \[1.7\] appbar
Save:node\android\study\Macro_android_note.h \[1.8\] @Subscribe
Save:node\android\study\Macro_android_note.h \[1.9\] Time
Save:node\android\study\Macro_android_note.h \[1.10\] ARouter
Save:node\android\study\Macro_android_note.h \[1.11\] 锚点
Save:node\android\study\Macro_android_note.h \[1.12\] 高斯模糊
//
Save:node\android\study\Macro_android_note.h \[2.1\] Tiny
Save:node\android\study\Macro_android_note.h \[2.2\] Glide
Save:node\android\study\Macro_android_note.h \[2.3\] Glide 网络图片尺寸-后
Save:node\android\study\Macro_android_note.h \[2.4\] Glide 网络图片尺寸-前
Save:node\android\study\Macro_android_note.h \[2.5\] Drawable 设置背景
Save:node\android\study\Macro_android_note.h \[2.6\] dataBinding
Save:node\android\study\Macro_android_note.h \[2.7\] ConstraintSet
Save:node\android\study\Macro_android_note.h \[2.8\] http
Save:node\android\study\Macro_android_note.h \[2.9\] fullscreen
Save:node\android\study\Macro_android_note.h \[2.10\] H5App
Save:node\android\study\Macro_android_note.h \[2.11\] 
Save:node\android\study\Macro_android_note.h \[2.12\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] 设置全屏显示
//设置全屏显示
android:theme="@android:style/Theme.Black.NotitleBar"
android:theme="@android:style/Theme.Black.NotitleBar.Fullscreen"

//设置全屏显示
<style name="AppTheme" parent="AppBaseTheme">
<item name="android:windowNoTitle">true</item>  <!--没有标题-->
</style>

//不包含状态栏
android:theme="@android :style/Theme.NoTitleBar.Fullscreen"


[1.2] 沉浸式状态栏

沉浸式状态栏


[1.3] 沉浸式状态栏全屏




[1.4] 启动模式
//Android启动模式
1. Standard 标准模式
2. SingleTop 栈顶复用模式
	被直接复用时，它的onCreate、onStart不会被系统调用
	一个新的方法 onNewIntent会被回调
3. SingleTask 栈内复用模式
	将存在栈中的Activity上面的其他Activity所有销毁，使它成为栈顶。
4. SingleInstance 单实例模式
	经常使用于系统中的应用
//使用方式
1. 
	<activity android:name="" android:launchMode="singleTask"/>
2. 动态指定方式，优先级要高
	intent.addFlags(Intent.FLAG_ACTIVITY_NEW_TASK);
限定范围：
	第一种方式无法为Activity直接指定 FLAG_ACTIVITY_CLEAR_TOP 标识，
	另外一种方式无法为Activity指定 singleInstance 模式。
//应用场景
1. SingleTask模式的运用场景
主页（Home页）
2. SingleTop模式的运用场景

//Flags
标记位既能够设定Activity的启动模式，如同上面介绍的，在动态指定启动模式，比方 FLAG_ACTIVITY_NEW_TASK 和 FLAG_ACTIVITY_SINGLE_TOP 等。
它还能够影响Activity 的运行状态 ，比方 FLAG_ACTIVITY_CLEAN_TOP 和 FLAG_ACTIVITY_EXCLUDE_FROM_RECENTS 等。
	以下介绍几个基本的标记位，切勿死记，理解几个就可以，须要时再查官方文档。
1. FLAG_ACTIVITY_NEW_TASK
作用是为Activity指定 “SingleTask”启动模式。跟在AndroidMainfest.xml指定效果同样。

2. FLAG_ACTIVITY_SINGLE_TOP
作用是为Activity指定 “SingleTop”启动模式，跟在AndroidMainfest.xml指定效果同样。

3. FLAG_ACTIVITY_CLEAN_TOP
具有此标记位的Activity，启动时会将与该Activity在同一任务栈的其他Activity出栈。一般与SingleTask启动模式一起出现。它会完毕SingleTask的作用。但事实上SingleTask启动模式默认具有此标记位的作用

4.FLAG_ACTIVITY_EXCLUDE_FROM_RECENTS
具有此标记位的Activity不会出如今历史Activity的列表中，使用场景：当某些情况下我们不希望用户通过历史列表回到Activity时，此标记位便体现了它的效果。它等同于在xml中指定Activity的属性：
android:excludeFromRecents="trure"



[1.5] 函数注释

	/**
	 * 创建二维码位图
	 *
	 * @param content 字符串内容
	 * @param size    位图宽&高(单位:px)
	 * @return
	 */



[1.6] Observer
// 被观察者
observable
// 订阅
subscribe 
// 监听
do
// 销毁
dispose()
// 发射(事件)
Emitter
// 组合
compose


[1.7] appbar
// appbar
<com.google.android.material.appbar.AppBarLayout
    android:layout_width="match_parent"
    android:layout_height="wrap_content"
    android:theme="@style/AppTheme.AppBarOverlay">

    <androidx.appcompat.widget.Toolbar
        android:id="@+id/toolbar"
        android:layout_width="match_parent"
        android:layout_height="?attr/actionBarSize"
        android:background="@drawable/shape_toolbar_bg"
        app:navigationIcon="@mipmap/icon_return"
        android:navigationIcon="@mipmap/icon_return"
        app:popupTheme="@style/AppTheme.PopupOverlay"/>

</com.google.android.material.appbar.AppBarLayout>

// set
binding.toolbar.setTitle("导入钱包账户");
setSupportActionBar(binding.toolbar);



[1.8] @Subscribe
//    @Subscribe(threadMode = ThreadMode.MAIN)
//    public void createOk(Event.CreateOk ok) {
//        ARouter.getInstance().build(RouteConst.AV_MAIN).navigation(this);
//        finish();
//    }



[1.9] Time
//        long now = System.currentTimeMillis();
//        diffTime = 15*60 - (now - createTime)/1000;
//        LogUtils.e(TAG, "diff: " + diffTime);
//        if(diffTime < 0)
//            diffTime = 0;



[1.10] ARouter
    //CLEAR TASK 功能无效
//    ARouter.getInstance().build(RouteConst.AV_MAIN)
//        .withFlags(Intent.FLAG_ACTIVITY_NEW_TASK)
//        .withFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK)
//        .navigation(this);



[1.11] 锚点
问题是你滚动的布局没有加锚点,直接上代码
ViewPager 的Fragment 用了NestedScrollview 然后也出现楼主相同的问题，
经测试，加了锚点（如下加黑代码）就不会有抖动的现象了

<android.support.v4.view.ViewPager
    android:id="@+id/vp_activity_login_view_pager"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:background="@color/white"
app:layout_anchor="@id/app_bar_layout"
app:layout_anchorGravity="bottom"
    app:layout_behavior="@string/appbar_scrolling_view_behavior"
/>



[1.12] 高斯模糊
// TransformationUtils
　Glide.with(this)
        .load(newActiviteLeftBannerUrl)
        .asBitmap()
        .placeholder(R.drawable.placeholder)
        .into(new TransformationUtils(target));


[1.13] 




[1.14] 




[1.15] 



[2.1] Tiny

//  Tiny.getInstance().source(picUrl)
//          .batchAsBitmap().withOptions(Tiny.BitmapCompressOptions()).batchCompress { isSuccess, bitmaps, t ->
//              LogUtil.i(tag, "Tiny.size >> " + 1 )
//          }

//  Tiny.getInstance().source(picUrl)
//          .asBitmap().withOptions(BitmapCompressOptions()).compress(object : BitmapCallback {
//              override  fun callback(isSuccess: Boolean, bitmap: Bitmap?, t: Throwable?) {
//                  LogUtil.i(tag, "Tiny.size >> $isSuccess  $t"  )
//                  bitmap?.let{
//                  }
//              }
//          })


[2.2] Glide

// 	annotationProcessor 'com.github.bumptech.glide:compiler:4.8.0'
    implementation 'com.github.bumptech.glide:glide:4.8.0'
    //implementation ('com.google.android.libraries.places:places:1.0.0'){
    //    exclude module: 'glide'
    //}
    
                
//     Glide.with(mContext).asBitmap().load(picUrl).into(object : ImageViewTarget<Bitmap?>(help.getView<ImageView>(R.id.pic_h)) {
//         override fun setResource(@Nullable resource: Bitmap?) {
//         }
//     })



[2.3] Glide 网络图片尺寸
var mOptions = RequestOptions()
        .placeholder(R.mipmap.cjhb_yu)
        .error(R.mipmap.zb_xiangq_icon3)
        //.override(3000, 3000)
        .priority(Priority.NORMAL)
                
Glide.with(mContext)
        .load(picUrl)
        .apply(mOptions)
        .listener(object : RequestListener<Drawable> {
            /**
             * 加载失败
             * @return false 未消费，继续走into(ImageView)
             *         true 已消费，不再继续走into(ImageView)
             */
            override fun onLoadFailed(e: GlideException?, model: Any?, target: Target<Drawable>?, isFirstResource: Boolean): Boolean {
                LogUtil.i(tag, "bitmap >> 加载失败")
                return false
            }

            /**
             * 加载成功
             * @return false 未消费，继续走into(ImageView)
             *         true 已消费，不再继续走into(ImageView) no type arguments expected for annotation class Target
             */
            override fun onResourceReady(resource: Drawable?, model: Any?, target: Target<Drawable>?, dataSource: DataSource?, isFirstResource: Boolean): Boolean {

                LogUtil.i(tag, "bitmap >> 加载成功 " + resource?.intrinsicWidth  + resource?.intrinsicHeight)
                isPicV = true
                return false
            }

        })
        .into(help.getView(R.id.pic_v))

// view不能为空
Glide.with(this).asBitmap().load(getIntent().getStringExtra("url")).into(new ImageViewTarget<Bitmap>(imageCode) {
    @Override
    protected void setResource(@Nullable Bitmap resource) {
        bitmap = resource;
        imageCode.setImageBitmap(bitmap);
    }
});



[2.4] Glide 网络图片尺寸-前
Glide.with(mContext).asBitmap().load(picUrl).into(object : SimpleTarget<Bitmap?>(500, 500) {
    override fun onResourceReady(resource: Bitmap, transition: Transition<in Bitmap?>?) {
        val drawable: Drawable = BitmapDrawable(context.getResources(), resource)
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.JELLY_BEAN) {
            yourRelativeLayout.setBackground(drawable)
        }
        TODO("Not yet implemented")
    }
})



[2.5] Drawable 设置背景
     val drawable: Drawable = BitmapDrawable(context.getResources(), resource)
     if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.JELLY_BEAN) {
               imageView.setImageBitmap(resource)
               imageView.buildDrawingCache()
         yourRelativeLayout.setBackground(drawable)
     }



[2.6] dataBinding

    //dataBinding {
    //    enabled = true
    //}

	 

[2.7] ConstraintSet
ConstraintSet set = new ConstraintSet();
set.clone(constraintLayout);
// 或 
// set.clone(this, R.layout.main_activity);

set.connect(v1.getId(), ConstraintSet.TOP, ConstraintSet.PARENT_ID, ConstraintSet.BOTTOM);
set.connect(v2.getId(), ConstraintSet.TOP, v1.getId(), ConstraintSet.BOTTOM, dp2px(16));
set.applyTo(constraintLayout);



[2.8] http
//ReqCallBack

public void onNext(String str) {
    LogUtil.i(TAG, "onNext str $str ");
}



[2.9] fullscreen

//        requestWindowFeature(Window.FEATURE_NO_TITLE);
//        getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN, WindowManager.LayoutParams.FLAG_FULLSCREEN);//  去掉状态栏

//        statuInScreen(this);

//        fullscreen(false);


//
//    private static void fullscreen(Activity activity, boolean enable) {
//        if (enable){ //全屏
//            activity.getWindow().getDecorView().setSystemUiVisibility(View.SYSTEM_UI_FLAG_LOW_PROFILE
//                    | View.SYSTEM_UI_FLAG_FULLSCREEN
//                    | View.SYSTEM_UI_FLAG_LAYOUT_STABLE
//                    | View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY
//                    | View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION
//                    | View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN
//                    | View.SYSTEM_UI_FLAG_HIDE_NAVIGATION);
//        } else { //非全屏
//            activity.getWindow().getDecorView().setSystemUiVisibility(
//                    View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN
//                            | View.SYSTEM_UI_FLAG_LAYOUT_STABLE
//                            | View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION
//            );
//        }
//    }



    /**
     * 全屏,并且沉侵式状态栏
     *
     * @param activity
     */
//    public static void statuInScreen(Activity activity) {
//        WindowManager.LayoutParams attrs = activity.getWindow().getAttributes();
//        attrs.flags &= ~WindowManager.LayoutParams.FLAG_FULLSCREEN;
//        activity.getWindow().setAttributes(attrs);
//        activity.getWindow().addFlags(WindowManager.LayoutParams.FLAG_LAYOUT_IN_SCREEN);
//        activity.getWindow().addFlags(WindowManager.LayoutParams.FLAG_LAYOUT_NO_LIMITS);
//    }

    /**
     * 全屏,并且沉侵式状态栏
     *
     * @param activity
     */
//    public static void statuInScreen2(Activity activity) {
//        if (Build.VERSION.SDK_INT>21){
////            activity.getWindow().getDecorView().setSystemUiVisibility(View.SYSTEM_UI_FLAG_FULLSCREEN);
//            activity.getWindow().getDecorView().setSystemUiVisibility(View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN | View.SYSTEM_UI_FLAG_LAYOUT_STABLE);
//            activity.getWindow().setStatusBarColor(Color.TRANSPARENT);
//        }else {
//            activity.getWindow().addFlags(WindowManager.LayoutParams.FLAG_TRANSLUCENT_STATUS);
//        }
//    }



[2.10] H5App
//

    <WebView xmlns:android="http://schemas.android.com/apk/res/android"
        android:id="@+id/webview"
        android:layout_width="match_parent"
        android:layout_height="match_parent">

    </WebView>







[2.11] 


[2.12] 


[2.13] 


[2.14] 


[2.15] 





