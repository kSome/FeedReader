FILE(REMOVE_RECURSE
  "src/Daemon.c"
  "src/DB_Manager.c"
  "src/Logger.c"
  "src/Utils.c"
  "src/QueryBuilder.c"
  "src/Model/Feed.c"
  "src/Model/Category.c"
  "src/Model/Article.c"
  "src/Model/Tag.c"
  "src/Constants.c"
  "src/Backends/FeedServer.c"
  "src/Backends/ttrss/TTRSS_API.c"
  "src/Backends/ttrss/TTRSS_Utils.c"
  "src/Backends/ttrss/TTRSS_Message.c"
  "src/Backends/feedly/FeedlyAPI.c"
  "src/Backends/feedly/FeedlyConnection.c"
  "src/ContentGrabber/stringPair.c"
  "src/ContentGrabber/grabberConfig.c"
  "src/ContentGrabber/grabber.c"
  "src/ContentGrabber/grabberUtils.c"
  "src/ContentGrabber/ReadabilityParserAPI.c"
  "src/FeedReader.c"
  "src/Logger.c"
  "src/Model/Feed.c"
  "src/Model/Category.c"
  "src/Model/Article.c"
  "src/Model/Tag.c"
  "src/Constants.c"
  "src/DB_Manager.c"
  "src/Utils.c"
  "src/QueryBuilder.c"
  "src/Widgets/ArticleList.c"
  "src/Widgets/ArticleRow.c"
  "src/Widgets/ArticleView.c"
  "src/Widgets/CategorieRow.c"
  "src/Widgets/ColorCircle.c"
  "src/Widgets/ColorPopover.c"
  "src/Widgets/ContentPage.c"
  "src/Widgets/FeedList.c"
  "src/Widgets/FeedRow.c"
  "src/Widgets/InitSyncPage.c"
  "src/Widgets/LoginPage.c"
  "src/Widgets/MainWindow.c"
  "src/Widgets/ModeButton.c"
  "src/Widgets/ReaderHeaderbar.c"
  "src/Widgets/ResetPage.c"
  "src/Widgets/ServiceSettingsRow.c"
  "src/Widgets/ShareRow.c"
  "src/Widgets/SettingsDialog.c"
  "src/Widgets/SharePopover.c"
  "src/Widgets/SpringCleanPage.c"
  "src/Widgets/TagRow.c"
  "src/Widgets/TagPopover.c"
  "src/Widgets/TagPopoverRow.c"
  "src/Widgets/UpdateButton.c"
  "src/Widgets/WebLoginPage.c"
  "src/ContentGrabber/stringPair.c"
  "src/Backends/ttrss/TTRSS_Message.c"
  "src/Share/ReadabilityAPI.c"
  "src/Share/PocketAPI.c"
  "src/Share/InstapaperAPI.c"
  "src/Share/EvernoteAPI.c"
  "src/Share/share.c"
  "feedreader-daemon_valac.stamp"
  "feedreader_valac.stamp"
  "CMakeFiles/feedreader-daemon.dir/src/Daemon.c.o"
  "CMakeFiles/feedreader-daemon.dir/src/DB_Manager.c.o"
  "CMakeFiles/feedreader-daemon.dir/src/Logger.c.o"
  "CMakeFiles/feedreader-daemon.dir/src/Utils.c.o"
  "CMakeFiles/feedreader-daemon.dir/src/QueryBuilder.c.o"
  "CMakeFiles/feedreader-daemon.dir/src/Model/Feed.c.o"
  "CMakeFiles/feedreader-daemon.dir/src/Model/Category.c.o"
  "CMakeFiles/feedreader-daemon.dir/src/Model/Article.c.o"
  "CMakeFiles/feedreader-daemon.dir/src/Model/Tag.c.o"
  "CMakeFiles/feedreader-daemon.dir/src/Constants.c.o"
  "CMakeFiles/feedreader-daemon.dir/src/Backends/FeedServer.c.o"
  "CMakeFiles/feedreader-daemon.dir/src/Backends/ttrss/TTRSS_API.c.o"
  "CMakeFiles/feedreader-daemon.dir/src/Backends/ttrss/TTRSS_Utils.c.o"
  "CMakeFiles/feedreader-daemon.dir/src/Backends/ttrss/TTRSS_Message.c.o"
  "CMakeFiles/feedreader-daemon.dir/src/Backends/feedly/FeedlyAPI.c.o"
  "CMakeFiles/feedreader-daemon.dir/src/Backends/feedly/FeedlyConnection.c.o"
  "CMakeFiles/feedreader-daemon.dir/src/ContentGrabber/stringPair.c.o"
  "CMakeFiles/feedreader-daemon.dir/src/ContentGrabber/grabberConfig.c.o"
  "CMakeFiles/feedreader-daemon.dir/src/ContentGrabber/grabber.c.o"
  "CMakeFiles/feedreader-daemon.dir/src/ContentGrabber/grabberUtils.c.o"
  "CMakeFiles/feedreader-daemon.dir/src/ContentGrabber/ReadabilityParserAPI.c.o"
  "feedreader-daemon.pdb"
  "feedreader-daemon"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang C)
  INCLUDE(CMakeFiles/feedreader-daemon.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
