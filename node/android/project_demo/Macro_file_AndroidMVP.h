
基础路径设置:
Inward   = True
Backward = 44
Save:node\android\project\Macro_file_demo.h
\\
demoPath = D:\project\Android\Demo\android_base
demo:\\
basePath = D:\project\Android\Demo\AndroidMVP\
base:\\



AsFile:base:



.gitignore
build.gradle                                // maven配置, gradle版本, kotlin版本
gradle.properties
gradlew
gradlew.bat
README.md
settings.gradle
app\.gitignore
app\build.gradle
app\proguard-rules.pro
app\src\androidTest\java\com\hqumath\androidmvp\ExampleInstrumentedTest.java
app\src\main\AndroidManifest.xml
app\src\main\AndroidManifest.xml  android.intent.action.MAIN	   // 入口Activity
app\src\main\java\com\hqumath\androidmvp\app\App.java
app\src\main\java\com\hqumath\androidmvp\app\AppManager.java
app\src\main\java\com\hqumath\androidmvp\base\BaseActivity.java
app\src\main\java\com\hqumath\androidmvp\base\BaseFragment.java
app\src\main\java\com\hqumath\androidmvp\base\BaseMvpActivity.java
app\src\main\java\com\hqumath\androidmvp\base\BaseMvpFragment.java
app\src\main\java\com\hqumath\androidmvp\base\BasePresenter.java
app\src\main\java\com\hqumath\androidmvp\base\BaseRecyclerAdapter.java
app\src\main\java\com\hqumath\androidmvp\base\BaseRecyclerViewHolder.java
app\src\main\java\com\hqumath\androidmvp\bean\BaseResultEntity.java
app\src\main\java\com\hqumath\androidmvp\bean\LoginResponse.java
app\src\main\java\com\hqumath\androidmvp\bean\ProductInfo.java
app\src\main\java\com\hqumath\androidmvp\bean\ProductListResponse.java
app\src\main\java\com\hqumath\androidmvp\net\AppNetConfig.java
app\src\main\java\com\hqumath\androidmvp\net\BaseApi.java
app\src\main\java\com\hqumath\androidmvp\net\HandleMessageCode.java
app\src\main\java\com\hqumath\androidmvp\net\HandlerException.java
app\src\main\java\com\hqumath\androidmvp\net\RetrofitClient.java
app\src\main\java\com\hqumath\androidmvp\net\download\DownloadInterceptor.java
app\src\main\java\com\hqumath\androidmvp\net\download\DownloadProgressListener.java
app\src\main\java\com\hqumath\androidmvp\net\download\DownloadResponseBody.java
app\src\main\java\com\hqumath\androidmvp\net\listener\HttpOnNextListener.java
app\src\main\java\com\hqumath\androidmvp\net\service\FileUpDownService.java
app\src\main\java\com\hqumath\androidmvp\net\service\LoginService.java
app\src\main\java\com\hqumath\androidmvp\net\service\MainService.java
app\src\main\java\com\hqumath\androidmvp\net\subscribers\ProgressDownSubscriber.java
app\src\main\java\com\hqumath\androidmvp\net\subscribers\ProgressSubscriber.java
app\src\main\java\com\hqumath\androidmvp\net\upload\ProgressRequestBody.java
app\src\main\java\com\hqumath\androidmvp\net\upload\UploadProgressListener.java
app\src\main\java\com\hqumath\androidmvp\ui\fileupdown\FileUpDownActivity.java
app\src\main\java\com\hqumath\androidmvp\ui\fileupdown\FileUpDownContract.java
app\src\main\java\com\hqumath\androidmvp\ui\fileupdown\FileUpDownPresenter.java
app\src\main\java\com\hqumath\androidmvp\ui\list\ListActivity.java
app\src\main\java\com\hqumath\androidmvp\ui\list\ListContract.java
app\src\main\java\com\hqumath\androidmvp\ui\list\ListPresenter.java
app\src\main\java\com\hqumath\androidmvp\ui\list\MyRecyclerAdapter.java
app\src\main\java\com\hqumath\androidmvp\ui\login\LoginActivity.java
app\src\main\java\com\hqumath\androidmvp\ui\login\LoginContract.java
app\src\main\java\com\hqumath\androidmvp\ui\login\LoginPresenter.java     // Login
app\src\main\java\com\hqumath\androidmvp\ui\main\DemoFragment.java
app\src\main\java\com\hqumath\androidmvp\ui\main\MainActivity.java     // 入口Activity
app\src\main\java\com\hqumath\androidmvp\ui\main\OneFragment.java
app\src\main\java\com\hqumath\androidmvp\ui\main\ThreeFragment.java
app\src\main\java\com\hqumath\androidmvp\ui\main\TwoFragment.java
app\src\main\java\com\hqumath\androidmvp\utils\FileUtils.java
app\src\main\java\com\hqumath\androidmvp\utils\LogUtil.java
app\src\main\java\com\hqumath\androidmvp\utils\PermissionUtils.java
app\src\main\java\com\hqumath\androidmvp\utils\ToastUtil.java
app\src\main\java\com\hqumath\androidmvp\widget\DownloadingDialog.java
app\src\main\java\com\hqumath\androidmvp\widget\DownloadingProgressBar.java

app\src\main\res\
app\src\main\res\drawable\divider.xml
app\src\main\res\drawable\ic_launcher_background.xml
app\src\main\res\drawable\ic_menu_about.xml
app\src\main\res\drawable\ic_menu_repo.xml
app\src\main\res\drawable\ic_menu_settings.xml
app\src\main\res\drawable\ic_menu_trace.xml
app\src\main\res\drawable-v24\ic_launcher_foreground.xml
app\src\main\res\layout\activity_fileupdown.xml
app\src\main\res\layout\activity_list.xml
app\src\main\res\layout\activity_login.xml
app\src\main\res\layout\activity_main.xml
app\src\main\res\layout\dialog_downloading.xml
app\src\main\res\layout\fragment_demo.xml
app\src\main\res\layout\fragment_one.xml
app\src\main\res\layout\fragment_three.xml
app\src\main\res\layout\fragment_two.xml
app\src\main\res\layout\main_recyclerview_item.xml
app\src\main\res\menu\main_bottom_navigation.xml
app\src\main\res\mipmap-anydpi-v26\ic_launcher.xml
app\src\main\res\mipmap-anydpi-v26\ic_launcher_round.xml
app\src\main\res\mipmap-hdpi\ic_launcher.png
app\src\main\res\mipmap-hdpi\ic_launcher_round.png
app\src\main\res\mipmap-mdpi\ic_launcher.png
app\src\main\res\mipmap-mdpi\ic_launcher_round.png
app\src\main\res\mipmap-xhdpi\ic_launcher.png
app\src\main\res\mipmap-xhdpi\ic_launcher_round.png
app\src\main\res\mipmap-xxhdpi\ic_launcher.png
app\src\main\res\mipmap-xxhdpi\ic_launcher_round.png
app\src\main\res\mipmap-xxxhdpi\ic_launcher.png
app\src\main\res\mipmap-xxxhdpi\ic_launcher_round.png
app\src\main\res\values\attrs.xml
app\src\main\res\values\colors.xml
app\src\main\res\values\strings.xml
app\src\main\res\values\styles.xml
app\src\test\java\com\hqumath\androidmvp\ExampleUnitTest.java

