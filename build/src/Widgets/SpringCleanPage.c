/* SpringCleanPage.c generated by valac 0.28.1, the Vala compiler
 * generated from SpringCleanPage.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <glib/gi18n-lib.h>
#include <float.h>
#include <math.h>
#include <pango/pango.h>


#define FEED_READER_TYPE_SPRING_CLEAN_PAGE (feed_reader_spring_clean_page_get_type ())
#define FEED_READER_SPRING_CLEAN_PAGE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FEED_READER_TYPE_SPRING_CLEAN_PAGE, FeedReaderSpringCleanPage))
#define FEED_READER_SPRING_CLEAN_PAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FEED_READER_TYPE_SPRING_CLEAN_PAGE, FeedReaderSpringCleanPageClass))
#define FEED_READER_IS_SPRING_CLEAN_PAGE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FEED_READER_TYPE_SPRING_CLEAN_PAGE))
#define FEED_READER_IS_SPRING_CLEAN_PAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FEED_READER_TYPE_SPRING_CLEAN_PAGE))
#define FEED_READER_SPRING_CLEAN_PAGE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FEED_READER_TYPE_SPRING_CLEAN_PAGE, FeedReaderSpringCleanPageClass))

typedef struct _FeedReaderSpringCleanPage FeedReaderSpringCleanPage;
typedef struct _FeedReaderSpringCleanPageClass FeedReaderSpringCleanPageClass;
typedef struct _FeedReaderSpringCleanPagePrivate FeedReaderSpringCleanPagePrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _FeedReaderSpringCleanPage {
	GtkBin parent_instance;
	FeedReaderSpringCleanPagePrivate * priv;
};

struct _FeedReaderSpringCleanPageClass {
	GtkBinClass parent_class;
};

struct _FeedReaderSpringCleanPagePrivate {
	GtkSpinner* m_spinner;
	GtkBox* m_spinnerBox;
};


static gpointer feed_reader_spring_clean_page_parent_class = NULL;

GType feed_reader_spring_clean_page_get_type (void) G_GNUC_CONST;
#define FEED_READER_SPRING_CLEAN_PAGE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), FEED_READER_TYPE_SPRING_CLEAN_PAGE, FeedReaderSpringCleanPagePrivate))
enum  {
	FEED_READER_SPRING_CLEAN_PAGE_DUMMY_PROPERTY
};
FeedReaderSpringCleanPage* feed_reader_spring_clean_page_new (void);
FeedReaderSpringCleanPage* feed_reader_spring_clean_page_construct (GType object_type);
static void feed_reader_spring_clean_page_finalize (GObject* obj);


FeedReaderSpringCleanPage* feed_reader_spring_clean_page_construct (GType object_type) {
	FeedReaderSpringCleanPage * self = NULL;
	GtkBox* _tmp0_ = NULL;
	GtkSpinner* _tmp1_ = NULL;
	GtkSpinner* _tmp2_ = NULL;
	GtkSpinner* _tmp3_ = NULL;
	GtkLabel* label = NULL;
	const gchar* _tmp4_ = NULL;
	GtkLabel* _tmp5_ = NULL;
	GtkStyleContext* _tmp6_ = NULL;
	GtkBox* _tmp7_ = NULL;
	GtkSpinner* _tmp8_ = NULL;
	GtkBox* _tmp9_ = NULL;
	GtkBox* _tmp10_ = NULL;
#line 6 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	self = (FeedReaderSpringCleanPage*) g_object_new (object_type, NULL);
#line 7 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	_tmp0_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 20);
#line 7 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	g_object_ref_sink (_tmp0_);
#line 7 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	_g_object_unref0 (self->priv->m_spinnerBox);
#line 7 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	self->priv->m_spinnerBox = _tmp0_;
#line 9 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	_tmp1_ = (GtkSpinner*) gtk_spinner_new ();
#line 9 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	g_object_ref_sink (_tmp1_);
#line 9 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	_g_object_unref0 (self->priv->m_spinner);
#line 9 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	self->priv->m_spinner = _tmp1_;
#line 10 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	_tmp2_ = self->priv->m_spinner;
#line 10 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	gtk_widget_set_size_request ((GtkWidget*) _tmp2_, 40, 40);
#line 11 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	_tmp3_ = self->priv->m_spinner;
#line 11 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	gtk_spinner_start (_tmp3_);
#line 13 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	_tmp4_ = _ ("FeedReader is cleaning the database.\nThis shouldn't take too long.");
#line 13 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	_tmp5_ = (GtkLabel*) gtk_label_new (_tmp4_);
#line 13 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	g_object_ref_sink (_tmp5_);
#line 13 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	label = _tmp5_;
#line 14 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	_tmp6_ = gtk_widget_get_style_context ((GtkWidget*) label);
#line 14 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	gtk_style_context_add_class (_tmp6_, "h2");
#line 15 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	gtk_misc_set_alignment ((GtkMisc*) label, (gfloat) 0, 0.5f);
#line 16 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	gtk_label_set_ellipsize (label, PANGO_ELLIPSIZE_END);
#line 17 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	gtk_label_set_line_wrap_mode (label, PANGO_WRAP_WORD_CHAR);
#line 18 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	gtk_label_set_line_wrap (label, TRUE);
#line 19 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	gtk_label_set_lines (label, 2);
#line 21 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	_tmp7_ = self->priv->m_spinnerBox;
#line 21 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	_tmp8_ = self->priv->m_spinner;
#line 21 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	gtk_box_pack_start (_tmp7_, (GtkWidget*) _tmp8_, FALSE, FALSE, (guint) 0);
#line 22 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	_tmp9_ = self->priv->m_spinnerBox;
#line 22 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	gtk_box_pack_end (_tmp9_, (GtkWidget*) label, FALSE, FALSE, (guint) 0);
#line 24 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	gtk_widget_set_halign ((GtkWidget*) self, GTK_ALIGN_CENTER);
#line 25 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	gtk_widget_set_valign ((GtkWidget*) self, GTK_ALIGN_CENTER);
#line 26 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	g_object_set ((GtkWidget*) self, "margin", 20, NULL);
#line 27 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	_tmp10_ = self->priv->m_spinnerBox;
#line 27 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp10_);
#line 6 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	_g_object_unref0 (label);
#line 6 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	return self;
#line 140 "SpringCleanPage.c"
}


FeedReaderSpringCleanPage* feed_reader_spring_clean_page_new (void) {
#line 6 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	return feed_reader_spring_clean_page_construct (FEED_READER_TYPE_SPRING_CLEAN_PAGE);
#line 147 "SpringCleanPage.c"
}


static void feed_reader_spring_clean_page_class_init (FeedReaderSpringCleanPageClass * klass) {
#line 1 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	feed_reader_spring_clean_page_parent_class = g_type_class_peek_parent (klass);
#line 1 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	g_type_class_add_private (klass, sizeof (FeedReaderSpringCleanPagePrivate));
#line 1 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	G_OBJECT_CLASS (klass)->finalize = feed_reader_spring_clean_page_finalize;
#line 158 "SpringCleanPage.c"
}


static void feed_reader_spring_clean_page_instance_init (FeedReaderSpringCleanPage * self) {
#line 1 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	self->priv = FEED_READER_SPRING_CLEAN_PAGE_GET_PRIVATE (self);
#line 165 "SpringCleanPage.c"
}


static void feed_reader_spring_clean_page_finalize (GObject* obj) {
	FeedReaderSpringCleanPage * self;
#line 1 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, FEED_READER_TYPE_SPRING_CLEAN_PAGE, FeedReaderSpringCleanPage);
#line 3 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	_g_object_unref0 (self->priv->m_spinner);
#line 4 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	_g_object_unref0 (self->priv->m_spinnerBox);
#line 1 "/home/samthomas/Development/Vala/feedreader/src/Widgets/SpringCleanPage.vala"
	G_OBJECT_CLASS (feed_reader_spring_clean_page_parent_class)->finalize (obj);
#line 179 "SpringCleanPage.c"
}


GType feed_reader_spring_clean_page_get_type (void) {
	static volatile gsize feed_reader_spring_clean_page_type_id__volatile = 0;
	if (g_once_init_enter (&feed_reader_spring_clean_page_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FeedReaderSpringCleanPageClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) feed_reader_spring_clean_page_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FeedReaderSpringCleanPage), 0, (GInstanceInitFunc) feed_reader_spring_clean_page_instance_init, NULL };
		GType feed_reader_spring_clean_page_type_id;
		feed_reader_spring_clean_page_type_id = g_type_register_static (gtk_bin_get_type (), "FeedReaderSpringCleanPage", &g_define_type_info, 0);
		g_once_init_leave (&feed_reader_spring_clean_page_type_id__volatile, feed_reader_spring_clean_page_type_id);
	}
	return feed_reader_spring_clean_page_type_id__volatile;
}



