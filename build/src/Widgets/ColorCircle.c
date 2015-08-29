/* ColorCircle.c generated by valac 0.28.1, the Vala compiler
 * generated from ColorCircle.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gdk-pixbuf/gdk-pixbuf.h>
#include <stdlib.h>
#include <string.h>
#include <gdk/gdk.h>
#include <float.h>
#include <math.h>
#include <cairo.h>


#define FEED_READER_TYPE_COLOR_CIRCLE (feed_reader_color_circle_get_type ())
#define FEED_READER_COLOR_CIRCLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FEED_READER_TYPE_COLOR_CIRCLE, FeedReaderColorCircle))
#define FEED_READER_COLOR_CIRCLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FEED_READER_TYPE_COLOR_CIRCLE, FeedReaderColorCircleClass))
#define FEED_READER_IS_COLOR_CIRCLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FEED_READER_TYPE_COLOR_CIRCLE))
#define FEED_READER_IS_COLOR_CIRCLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FEED_READER_TYPE_COLOR_CIRCLE))
#define FEED_READER_COLOR_CIRCLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FEED_READER_TYPE_COLOR_CIRCLE, FeedReaderColorCircleClass))

typedef struct _FeedReaderColorCircle FeedReaderColorCircle;
typedef struct _FeedReaderColorCircleClass FeedReaderColorCircleClass;
typedef struct _FeedReaderColorCirclePrivate FeedReaderColorCirclePrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define FEED_READER_TYPE_LOGGER (feed_reader_logger_get_type ())
#define FEED_READER_LOGGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FEED_READER_TYPE_LOGGER, FeedReaderLogger))
#define FEED_READER_LOGGER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FEED_READER_TYPE_LOGGER, FeedReaderLoggerClass))
#define FEED_READER_IS_LOGGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FEED_READER_TYPE_LOGGER))
#define FEED_READER_IS_LOGGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FEED_READER_TYPE_LOGGER))
#define FEED_READER_LOGGER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FEED_READER_TYPE_LOGGER, FeedReaderLoggerClass))

typedef struct _FeedReaderLogger FeedReaderLogger;
typedef struct _FeedReaderLoggerClass FeedReaderLoggerClass;

#define FEED_READER_TYPE_LOG_MESSAGE (feed_reader_log_message_get_type ())
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _cairo_destroy0(var) ((var == NULL) ? NULL : (var = (cairo_destroy (var), NULL)))
#define _cairo_surface_destroy0(var) ((var == NULL) ? NULL : (var = (cairo_surface_destroy (var), NULL)))

struct _FeedReaderColorCircle {
	GtkEventBox parent_instance;
	FeedReaderColorCirclePrivate * priv;
};

struct _FeedReaderColorCircleClass {
	GtkEventBoxClass parent_class;
};

struct _FeedReaderColorCirclePrivate {
	GtkImage* m_icon;
	GtkImage* m_icon_light;
	gint m_color;
};

typedef enum  {
	FEED_READER_LOG_MESSAGE_ERROR,
	FEED_READER_LOG_MESSAGE_WARNING,
	FEED_READER_LOG_MESSAGE_INFO,
	FEED_READER_LOG_MESSAGE_DEBUG
} FeedReaderLogMessage;


static gpointer feed_reader_color_circle_parent_class = NULL;
extern FeedReaderLogger* feed_reader_logger;

GType feed_reader_color_circle_get_type (void) G_GNUC_CONST;
#define FEED_READER_COLOR_CIRCLE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), FEED_READER_TYPE_COLOR_CIRCLE, FeedReaderColorCirclePrivate))
enum  {
	FEED_READER_COLOR_CIRCLE_DUMMY_PROPERTY
};
FeedReaderColorCircle* feed_reader_color_circle_new (gint color, gboolean clickable);
FeedReaderColorCircle* feed_reader_color_circle_construct (GType object_type, gint color, gboolean clickable);
static GdkPixbuf* feed_reader_color_circle_drawIcon (FeedReaderColorCircle* self, gboolean light);
GType feed_reader_logger_get_type (void) G_GNUC_CONST;
GType feed_reader_log_message_get_type (void) G_GNUC_CONST;
void feed_reader_logger_print (FeedReaderLogger* self, FeedReaderLogMessage level, const gchar* message);
static gboolean ___lambda30_ (FeedReaderColorCircle* self);
static void feed_reader_color_circle_IconEnter (FeedReaderColorCircle* self);
static gboolean ____lambda30__gtk_widget_enter_notify_event (GtkWidget* _sender, GdkEventCrossing* event, gpointer self);
static gboolean ___lambda31_ (FeedReaderColorCircle* self);
static void feed_reader_color_circle_IconLeave (FeedReaderColorCircle* self);
static gboolean ____lambda31__gtk_widget_leave_notify_event (GtkWidget* _sender, GdkEventCrossing* event, gpointer self);
static gboolean ___lambda32_ (FeedReaderColorCircle* self);
static void feed_reader_color_circle_IconClicked (FeedReaderColorCircle* self);
static gboolean ____lambda32__gtk_widget_button_press_event (GtkWidget* _sender, GdkEventButton* event, gpointer self);
void feed_reader_color_circle_newColor (FeedReaderColorCircle* self, gint color);
static void feed_reader_color_circle_finalize (GObject* obj);

extern const gchar* FEED_READER_COLORS[24];

static gboolean ___lambda30_ (FeedReaderColorCircle* self) {
	gboolean result = FALSE;
#line 28 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	feed_reader_color_circle_IconEnter (self);
#line 28 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	result = TRUE;
#line 28 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	return result;
#line 104 "ColorCircle.c"
}


static gboolean ____lambda30__gtk_widget_enter_notify_event (GtkWidget* _sender, GdkEventCrossing* event, gpointer self) {
	gboolean result;
	result = ___lambda30_ ((FeedReaderColorCircle*) self);
#line 28 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	return result;
#line 113 "ColorCircle.c"
}


static gboolean ___lambda31_ (FeedReaderColorCircle* self) {
	gboolean result = FALSE;
#line 29 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	feed_reader_color_circle_IconLeave (self);
#line 29 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	result = TRUE;
#line 29 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	return result;
#line 125 "ColorCircle.c"
}


static gboolean ____lambda31__gtk_widget_leave_notify_event (GtkWidget* _sender, GdkEventCrossing* event, gpointer self) {
	gboolean result;
	result = ___lambda31_ ((FeedReaderColorCircle*) self);
#line 29 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	return result;
#line 134 "ColorCircle.c"
}


static gboolean ___lambda32_ (FeedReaderColorCircle* self) {
	gboolean result = FALSE;
#line 30 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	feed_reader_color_circle_IconClicked (self);
#line 30 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	result = TRUE;
#line 30 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	return result;
#line 146 "ColorCircle.c"
}


static gboolean ____lambda32__gtk_widget_button_press_event (GtkWidget* _sender, GdkEventButton* event, gpointer self) {
	gboolean result;
	result = ___lambda32_ ((FeedReaderColorCircle*) self);
#line 30 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	return result;
#line 155 "ColorCircle.c"
}


FeedReaderColorCircle* feed_reader_color_circle_construct (GType object_type, gint color, gboolean clickable) {
	FeedReaderColorCircle * self = NULL;
	gint _tmp0_ = 0;
	gboolean _tmp10_ = FALSE;
	GtkImage* _tmp11_ = NULL;
	GError * _inner_error_ = NULL;
#line 8 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	self = (FeedReaderColorCircle*) g_object_new (object_type, NULL);
#line 10 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp0_ = color;
#line 10 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	self->priv->m_color = _tmp0_;
#line 171 "ColorCircle.c"
	{
		GdkPixbuf* _tmp1_ = NULL;
		GdkPixbuf* _tmp2_ = NULL;
		GtkImage* _tmp3_ = NULL;
		GdkPixbuf* _tmp4_ = NULL;
		GdkPixbuf* _tmp5_ = NULL;
		GtkImage* _tmp6_ = NULL;
#line 13 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		_tmp1_ = feed_reader_color_circle_drawIcon (self, FALSE);
#line 13 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		_tmp2_ = _tmp1_;
#line 13 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		_tmp3_ = (GtkImage*) gtk_image_new_from_pixbuf (_tmp2_);
#line 13 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		g_object_ref_sink (_tmp3_);
#line 13 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		_g_object_unref0 (self->priv->m_icon);
#line 13 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		self->priv->m_icon = _tmp3_;
#line 13 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		_g_object_unref0 (_tmp2_);
#line 14 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		_tmp4_ = feed_reader_color_circle_drawIcon (self, TRUE);
#line 14 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		_tmp5_ = _tmp4_;
#line 14 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		_tmp6_ = (GtkImage*) gtk_image_new_from_pixbuf (_tmp5_);
#line 14 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		g_object_ref_sink (_tmp6_);
#line 14 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		_g_object_unref0 (self->priv->m_icon_light);
#line 14 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		self->priv->m_icon_light = _tmp6_;
#line 14 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		_g_object_unref0 (_tmp5_);
#line 207 "ColorCircle.c"
	}
	goto __finally12;
	__catch12_g_error:
	{
		GError* e = NULL;
		FeedReaderLogger* _tmp7_ = NULL;
		GError* _tmp8_ = NULL;
		const gchar* _tmp9_ = NULL;
#line 12 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		e = _inner_error_;
#line 12 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		_inner_error_ = NULL;
#line 18 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		_tmp7_ = feed_reader_logger;
#line 18 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		_tmp8_ = e;
#line 18 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		_tmp9_ = _tmp8_->message;
#line 18 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		feed_reader_logger_print (_tmp7_, FEED_READER_LOG_MESSAGE_DEBUG, _tmp9_);
#line 12 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		_g_error_free0 (e);
#line 230 "ColorCircle.c"
	}
	__finally12:
#line 12 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 12 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 12 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		g_clear_error (&_inner_error_);
#line 12 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		return NULL;
#line 241 "ColorCircle.c"
	}
#line 21 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	gtk_widget_set_events ((GtkWidget*) self, (gint) GDK_BUTTON_PRESS_MASK);
#line 22 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	gtk_widget_set_events ((GtkWidget*) self, (gint) GDK_ENTER_NOTIFY_MASK);
#line 23 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	gtk_widget_set_events ((GtkWidget*) self, (gint) GDK_LEAVE_NOTIFY_MASK);
#line 24 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	gtk_widget_set_size_request ((GtkWidget*) self, 16, 16);
#line 26 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp10_ = clickable;
#line 26 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	if (_tmp10_) {
#line 28 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		g_signal_connect_object ((GtkWidget*) self, "enter-notify-event", (GCallback) ____lambda30__gtk_widget_enter_notify_event, self, 0);
#line 29 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		g_signal_connect_object ((GtkWidget*) self, "leave-notify-event", (GCallback) ____lambda31__gtk_widget_leave_notify_event, self, 0);
#line 30 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		g_signal_connect_object ((GtkWidget*) self, "button-press-event", (GCallback) ____lambda32__gtk_widget_button_press_event, self, 0);
#line 261 "ColorCircle.c"
	}
#line 33 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp11_ = self->priv->m_icon;
#line 33 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp11_);
#line 34 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	gtk_widget_show_all ((GtkWidget*) self);
#line 8 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	return self;
#line 271 "ColorCircle.c"
}


FeedReaderColorCircle* feed_reader_color_circle_new (gint color, gboolean clickable) {
#line 8 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	return feed_reader_color_circle_construct (FEED_READER_TYPE_COLOR_CIRCLE, color, clickable);
#line 278 "ColorCircle.c"
}


void feed_reader_color_circle_newColor (FeedReaderColorCircle* self, gint color) {
	gint _tmp0_ = 0;
	GError * _inner_error_ = NULL;
#line 37 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	g_return_if_fail (self != NULL);
#line 39 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp0_ = color;
#line 39 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	self->priv->m_color = _tmp0_;
#line 291 "ColorCircle.c"
	{
		GtkImage* _tmp1_ = NULL;
		GdkPixbuf* _tmp2_ = NULL;
		GdkPixbuf* _tmp3_ = NULL;
		GtkImage* _tmp4_ = NULL;
		GdkPixbuf* _tmp5_ = NULL;
		GdkPixbuf* _tmp6_ = NULL;
#line 42 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		_tmp1_ = self->priv->m_icon;
#line 42 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		_tmp2_ = feed_reader_color_circle_drawIcon (self, FALSE);
#line 42 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		_tmp3_ = _tmp2_;
#line 42 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		gtk_image_set_from_pixbuf (_tmp1_, _tmp3_);
#line 42 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		_g_object_unref0 (_tmp3_);
#line 43 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		_tmp4_ = self->priv->m_icon_light;
#line 43 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		_tmp5_ = feed_reader_color_circle_drawIcon (self, TRUE);
#line 43 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		_tmp6_ = _tmp5_;
#line 43 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		gtk_image_set_from_pixbuf (_tmp4_, _tmp6_);
#line 43 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		_g_object_unref0 (_tmp6_);
#line 319 "ColorCircle.c"
	}
	goto __finally13;
	__catch13_g_error:
	{
		GError* e = NULL;
		FeedReaderLogger* _tmp7_ = NULL;
		GError* _tmp8_ = NULL;
		const gchar* _tmp9_ = NULL;
#line 41 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		e = _inner_error_;
#line 41 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		_inner_error_ = NULL;
#line 47 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		_tmp7_ = feed_reader_logger;
#line 47 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		_tmp8_ = e;
#line 47 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		_tmp9_ = _tmp8_->message;
#line 47 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		feed_reader_logger_print (_tmp7_, FEED_READER_LOG_MESSAGE_DEBUG, _tmp9_);
#line 41 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		_g_error_free0 (e);
#line 342 "ColorCircle.c"
	}
	__finally13:
#line 41 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 41 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 41 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		g_clear_error (&_inner_error_);
#line 41 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		return;
#line 353 "ColorCircle.c"
	}
}


static void feed_reader_color_circle_IconEnter (FeedReaderColorCircle* self) {
	GtkImage* _tmp0_ = NULL;
	GtkImage* _tmp1_ = NULL;
#line 52 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	g_return_if_fail (self != NULL);
#line 54 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp0_ = self->priv->m_icon;
#line 54 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	gtk_container_remove ((GtkContainer*) self, (GtkWidget*) _tmp0_);
#line 55 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp1_ = self->priv->m_icon_light;
#line 55 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp1_);
#line 56 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	gtk_widget_show_all ((GtkWidget*) self);
#line 373 "ColorCircle.c"
}


static void feed_reader_color_circle_IconLeave (FeedReaderColorCircle* self) {
	GtkImage* _tmp0_ = NULL;
	GtkImage* _tmp1_ = NULL;
#line 59 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	g_return_if_fail (self != NULL);
#line 61 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp0_ = self->priv->m_icon_light;
#line 61 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	gtk_container_remove ((GtkContainer*) self, (GtkWidget*) _tmp0_);
#line 62 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp1_ = self->priv->m_icon;
#line 62 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp1_);
#line 63 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	gtk_widget_show_all ((GtkWidget*) self);
#line 392 "ColorCircle.c"
}


static void feed_reader_color_circle_IconClicked (FeedReaderColorCircle* self) {
	FeedReaderLogger* _tmp0_ = NULL;
	gint _tmp1_ = 0;
#line 66 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	g_return_if_fail (self != NULL);
#line 68 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp0_ = feed_reader_logger;
#line 68 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	feed_reader_logger_print (_tmp0_, FEED_READER_LOG_MESSAGE_DEBUG, "ColorCircle: click");
#line 69 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp1_ = self->priv->m_color;
#line 69 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	g_signal_emit_by_name (self, "clicked", _tmp1_);
#line 409 "ColorCircle.c"
}


static GdkPixbuf* feed_reader_color_circle_drawIcon (FeedReaderColorCircle* self, gboolean light) {
	GdkPixbuf* result = NULL;
	gint size = 0;
	GdkRGBA color = {0};
	gint _tmp0_ = 0;
	const gchar* _tmp1_ = NULL;
	gdouble lighten = 0.0;
	gboolean _tmp2_ = FALSE;
	cairo_surface_t* surface = NULL;
	GdkWindow* _tmp3_ = NULL;
	gint _tmp4_ = 0;
	gint _tmp5_ = 0;
	cairo_surface_t* _tmp6_ = NULL;
	cairo_t* context = NULL;
	cairo_t* _tmp7_ = NULL;
	GdkRGBA _tmp8_ = {0};
	gdouble _tmp9_ = 0.0;
	GdkRGBA _tmp10_ = {0};
	gdouble _tmp11_ = 0.0;
	GdkRGBA _tmp12_ = {0};
	gdouble _tmp13_ = 0.0;
	gdouble _tmp14_ = 0.0;
	gint _tmp15_ = 0;
	gint _tmp16_ = 0;
	gint _tmp17_ = 0;
	gint _tmp18_ = 0;
	gint _tmp19_ = 0;
	gint _tmp20_ = 0;
	gint _tmp21_ = 0;
	GdkRGBA _tmp22_ = {0};
	gdouble _tmp23_ = 0.0;
	GdkRGBA _tmp24_ = {0};
	gdouble _tmp25_ = 0.0;
	GdkRGBA _tmp26_ = {0};
	gdouble _tmp27_ = 0.0;
	gdouble _tmp28_ = 0.0;
	gint _tmp29_ = 0;
	gint _tmp30_ = 0;
	GdkPixbuf* _tmp31_ = NULL;
#line 73 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 75 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	size = 16;
#line 76 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	memset (&color, 0, sizeof (GdkRGBA));
#line 77 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp0_ = self->priv->m_color;
#line 77 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp1_ = FEED_READER_COLORS[_tmp0_];
#line 77 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	gdk_rgba_parse (&color, _tmp1_);
#line 78 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	lighten = 1.0;
#line 79 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp2_ = light;
#line 79 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	if (_tmp2_) {
#line 80 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
		lighten = 0.7;
#line 472 "ColorCircle.c"
	}
#line 82 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp3_ = gtk_widget_get_window ((GtkWidget*) self);
#line 82 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp4_ = size;
#line 82 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp5_ = size;
#line 82 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp6_ = gdk_window_create_similar_image_surface (_tmp3_, 0, _tmp4_, _tmp5_, 0);
#line 82 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	surface = _tmp6_;
#line 85 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp7_ = cairo_create (surface);
#line 85 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	context = _tmp7_;
#line 87 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	cairo_set_line_width (context, (gdouble) 2);
#line 88 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	cairo_set_fill_rule (context, CAIRO_FILL_RULE_EVEN_ODD);
#line 90 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp8_ = color;
#line 90 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp9_ = _tmp8_.red;
#line 90 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp10_ = color;
#line 90 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp11_ = _tmp10_.green;
#line 90 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp12_ = color;
#line 90 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp13_ = _tmp12_.blue;
#line 90 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp14_ = lighten;
#line 90 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	cairo_set_source_rgba (context, _tmp9_, _tmp11_, _tmp13_, 0.6 * _tmp14_);
#line 91 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp15_ = size;
#line 91 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp16_ = size;
#line 91 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp17_ = size;
#line 91 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	cairo_arc (context, (gdouble) (_tmp15_ / 2), (gdouble) (_tmp16_ / 2), (gdouble) (_tmp17_ / 2), (gdouble) 0, 2 * G_PI);
#line 92 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	cairo_fill_preserve (context);
#line 94 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp18_ = size;
#line 94 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp19_ = size;
#line 94 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp20_ = size;
#line 94 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp21_ = size;
#line 94 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	cairo_arc (context, (gdouble) (_tmp18_ / 2), (gdouble) (_tmp19_ / 2), (gdouble) ((_tmp20_ / 2) - (_tmp21_ / 8)), (gdouble) 0, 2 * G_PI);
#line 95 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp22_ = color;
#line 95 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp23_ = _tmp22_.red;
#line 95 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp24_ = color;
#line 95 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp25_ = _tmp24_.green;
#line 95 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp26_ = color;
#line 95 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp27_ = _tmp26_.blue;
#line 95 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp28_ = lighten;
#line 95 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	cairo_set_source_rgba (context, _tmp23_, _tmp25_, _tmp27_, 0.6 * _tmp28_);
#line 96 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	cairo_fill_preserve (context);
#line 98 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp29_ = size;
#line 98 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp30_ = size;
#line 98 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_tmp31_ = gdk_pixbuf_get_from_surface (surface, 0, 0, _tmp29_, _tmp30_);
#line 98 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	result = _tmp31_;
#line 98 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_cairo_destroy0 (context);
#line 98 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_cairo_surface_destroy0 (surface);
#line 98 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	return result;
#line 560 "ColorCircle.c"
}


static void feed_reader_color_circle_class_init (FeedReaderColorCircleClass * klass) {
#line 1 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	feed_reader_color_circle_parent_class = g_type_class_peek_parent (klass);
#line 1 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	g_type_class_add_private (klass, sizeof (FeedReaderColorCirclePrivate));
#line 1 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	G_OBJECT_CLASS (klass)->finalize = feed_reader_color_circle_finalize;
#line 1 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	g_signal_new ("clicked", FEED_READER_TYPE_COLOR_CIRCLE, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__INT, G_TYPE_NONE, 1, G_TYPE_INT);
#line 573 "ColorCircle.c"
}


static void feed_reader_color_circle_instance_init (FeedReaderColorCircle * self) {
#line 1 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	self->priv = FEED_READER_COLOR_CIRCLE_GET_PRIVATE (self);
#line 580 "ColorCircle.c"
}


static void feed_reader_color_circle_finalize (GObject* obj) {
	FeedReaderColorCircle * self;
#line 1 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, FEED_READER_TYPE_COLOR_CIRCLE, FeedReaderColorCircle);
#line 3 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_g_object_unref0 (self->priv->m_icon);
#line 4 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	_g_object_unref0 (self->priv->m_icon_light);
#line 1 "/home/samthomas/Development/Vala/feedreader/src/Widgets/ColorCircle.vala"
	G_OBJECT_CLASS (feed_reader_color_circle_parent_class)->finalize (obj);
#line 594 "ColorCircle.c"
}


GType feed_reader_color_circle_get_type (void) {
	static volatile gsize feed_reader_color_circle_type_id__volatile = 0;
	if (g_once_init_enter (&feed_reader_color_circle_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FeedReaderColorCircleClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) feed_reader_color_circle_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FeedReaderColorCircle), 0, (GInstanceInitFunc) feed_reader_color_circle_instance_init, NULL };
		GType feed_reader_color_circle_type_id;
		feed_reader_color_circle_type_id = g_type_register_static (gtk_event_box_get_type (), "FeedReaderColorCircle", &g_define_type_info, 0);
		g_once_init_leave (&feed_reader_color_circle_type_id__volatile, feed_reader_color_circle_type_id);
	}
	return feed_reader_color_circle_type_id__volatile;
}



