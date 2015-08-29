/* ReadabilityParserAPI.c generated by valac 0.28.1, the Vala compiler
 * generated from ReadabilityParserAPI.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <libsoup/soup.h>
#include <json-glib/json-glib.h>
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>
#include <glib/gi18n-lib.h>


#define FEED_READER_TYPE_READABILITY_PARSER_API (feed_reader_readability_parser_api_get_type ())
#define FEED_READER_READABILITY_PARSER_API(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FEED_READER_TYPE_READABILITY_PARSER_API, FeedReaderReadabilityParserAPI))
#define FEED_READER_READABILITY_PARSER_API_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FEED_READER_TYPE_READABILITY_PARSER_API, FeedReaderReadabilityParserAPIClass))
#define FEED_READER_IS_READABILITY_PARSER_API(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FEED_READER_TYPE_READABILITY_PARSER_API))
#define FEED_READER_IS_READABILITY_PARSER_API_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FEED_READER_TYPE_READABILITY_PARSER_API))
#define FEED_READER_READABILITY_PARSER_API_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FEED_READER_TYPE_READABILITY_PARSER_API, FeedReaderReadabilityParserAPIClass))

typedef struct _FeedReaderReadabilityParserAPI FeedReaderReadabilityParserAPI;
typedef struct _FeedReaderReadabilityParserAPIClass FeedReaderReadabilityParserAPIClass;
typedef struct _FeedReaderReadabilityParserAPIPrivate FeedReaderReadabilityParserAPIPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _json_object_unref0(var) ((var == NULL) ? NULL : (var = (json_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define __vala_SoupBuffer_free0(var) ((var == NULL) ? NULL : (var = (_vala_SoupBuffer_free (var), NULL)))

#define FEED_READER_TYPE_CONNECTION_ERROR (feed_reader_connection_error_get_type ())

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

struct _FeedReaderReadabilityParserAPI {
	GObject parent_instance;
	FeedReaderReadabilityParserAPIPrivate * priv;
};

struct _FeedReaderReadabilityParserAPIClass {
	GObjectClass parent_class;
};

struct _FeedReaderReadabilityParserAPIPrivate {
	SoupSession* m_session;
	SoupMessage* m_message_soup;
	JsonParser* m_parser;
	JsonObject* m_root_object;
	gchar* m_contenttype;
	gchar* m_token;
};

typedef enum  {
	FEED_READER_CONNECTION_ERROR_SUCCESS,
	FEED_READER_CONNECTION_ERROR_NO_RESPONSE,
	FEED_READER_CONNECTION_ERROR_INVALID_SESSIONID,
	FEED_READER_CONNECTION_ERROR_TTRSS_API,
	FEED_READER_CONNECTION_ERROR_UNKNOWN
} FeedReaderConnectionError;

typedef enum  {
	FEED_READER_LOG_MESSAGE_ERROR,
	FEED_READER_LOG_MESSAGE_WARNING,
	FEED_READER_LOG_MESSAGE_INFO,
	FEED_READER_LOG_MESSAGE_DEBUG
} FeedReaderLogMessage;


static gpointer feed_reader_readability_parser_api_parent_class = NULL;
extern GSettings* feed_reader_settings_readability;
extern FeedReaderLogger* feed_reader_logger;

GType feed_reader_readability_parser_api_get_type (void) G_GNUC_CONST;
#define FEED_READER_READABILITY_PARSER_API_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), FEED_READER_TYPE_READABILITY_PARSER_API, FeedReaderReadabilityParserAPIPrivate))
enum  {
	FEED_READER_READABILITY_PARSER_API_DUMMY_PROPERTY
};
FeedReaderReadabilityParserAPI* feed_reader_readability_parser_api_new (const gchar* url);
FeedReaderReadabilityParserAPI* feed_reader_readability_parser_api_construct (GType object_type, const gchar* url);
gint feed_reader_readability_parser_api_process (FeedReaderReadabilityParserAPI* self);
static void _vala_SoupBuffer_free (SoupBuffer* self);
GType feed_reader_connection_error_get_type (void) G_GNUC_CONST;
GType feed_reader_logger_get_type (void) G_GNUC_CONST;
GType feed_reader_log_message_get_type (void) G_GNUC_CONST;
void feed_reader_logger_print (FeedReaderLogger* self, FeedReaderLogMessage level, const gchar* message);
gchar* feed_reader_readability_parser_api_getAuthor (FeedReaderReadabilityParserAPI* self);
gchar* feed_reader_readability_parser_api_getTitle (FeedReaderReadabilityParserAPI* self);
gchar* feed_reader_readability_parser_api_getPreview (FeedReaderReadabilityParserAPI* self);
gchar* feed_reader_readability_parser_api_getContent (FeedReaderReadabilityParserAPI* self);
static void feed_reader_readability_parser_api_finalize (GObject* obj);


FeedReaderReadabilityParserAPI* feed_reader_readability_parser_api_construct (GType object_type, const gchar* url) {
	FeedReaderReadabilityParserAPI * self = NULL;
	GSettings* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	SoupSession* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	JsonParser* _tmp4_ = NULL;
	const gchar* _tmp5_ = NULL;
	gchar* _tmp6_ = NULL;
	gchar* _tmp7_ = NULL;
	gchar* _tmp8_ = NULL;
	gchar* _tmp9_ = NULL;
	const gchar* _tmp10_ = NULL;
	gchar* _tmp11_ = NULL;
	gchar* _tmp12_ = NULL;
	SoupMessage* _tmp13_ = NULL;
#line 10 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	g_return_val_if_fail (url != NULL, NULL);
#line 10 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	self = (FeedReaderReadabilityParserAPI*) g_object_new (object_type, NULL);
#line 12 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp0_ = feed_reader_settings_readability;
#line 12 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp1_ = g_settings_get_string (_tmp0_, "parser-api-key");
#line 12 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_g_free0 (self->priv->m_token);
#line 12 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	self->priv->m_token = _tmp1_;
#line 13 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp2_ = soup_session_new ();
#line 13 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_g_object_unref0 (self->priv->m_session);
#line 13 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	self->priv->m_session = _tmp2_;
#line 14 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp3_ = g_strdup ("application/x-www-form-urlencoded");
#line 14 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_g_free0 (self->priv->m_contenttype);
#line 14 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	self->priv->m_contenttype = _tmp3_;
#line 15 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp4_ = json_parser_new ();
#line 15 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_g_object_unref0 (self->priv->m_parser);
#line 15 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	self->priv->m_parser = _tmp4_;
#line 16 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp5_ = url;
#line 16 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp6_ = g_strconcat ("https://www.readability.com/api/content/v1/parser?url=", _tmp5_, NULL);
#line 16 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp7_ = _tmp6_;
#line 16 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp8_ = g_strconcat (_tmp7_, "&token=", NULL);
#line 16 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp9_ = _tmp8_;
#line 16 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp10_ = self->priv->m_token;
#line 16 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp11_ = g_strconcat (_tmp9_, _tmp10_, NULL);
#line 16 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp12_ = _tmp11_;
#line 16 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp13_ = soup_message_new ("GET", _tmp12_);
#line 16 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_g_object_unref0 (self->priv->m_message_soup);
#line 16 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	self->priv->m_message_soup = _tmp13_;
#line 16 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_g_free0 (_tmp12_);
#line 16 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_g_free0 (_tmp9_);
#line 16 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_g_free0 (_tmp7_);
#line 10 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	return self;
#line 180 "ReadabilityParserAPI.c"
}


FeedReaderReadabilityParserAPI* feed_reader_readability_parser_api_new (const gchar* url) {
#line 10 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	return feed_reader_readability_parser_api_construct (FEED_READER_TYPE_READABILITY_PARSER_API, url);
#line 187 "ReadabilityParserAPI.c"
}


static void _vala_SoupBuffer_free (SoupBuffer* self) {
#line 23 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	g_boxed_free (soup_buffer_get_type (), self);
#line 194 "ReadabilityParserAPI.c"
}


static gpointer _json_object_ref0 (gpointer self) {
#line 36 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	return self ? json_object_ref (self) : NULL;
#line 201 "ReadabilityParserAPI.c"
}


gint feed_reader_readability_parser_api_process (FeedReaderReadabilityParserAPI* self) {
	gint result = 0;
	SoupSession* _tmp0_ = NULL;
	SoupMessage* _tmp1_ = NULL;
	gboolean _tmp2_ = FALSE;
	SoupMessage* _tmp3_ = NULL;
	SoupMessageBody* _tmp4_ = NULL;
	SoupBuffer* _tmp5_ = NULL;
	SoupBuffer* _tmp6_ = NULL;
	guint8* _tmp7_ = NULL;
	gint _tmp7__length1 = 0;
	gboolean _tmp8_ = FALSE;
	JsonParser* _tmp24_ = NULL;
	JsonNode* _tmp25_ = NULL;
	JsonObject* _tmp26_ = NULL;
	JsonObject* _tmp27_ = NULL;
	JsonObject* _tmp28_ = NULL;
	gboolean _tmp29_ = FALSE;
	GError * _inner_error_ = NULL;
#line 19 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 21 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp0_ = self->priv->m_session;
#line 21 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp1_ = self->priv->m_message_soup;
#line 21 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	soup_session_send_message (_tmp0_, _tmp1_);
#line 23 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp3_ = self->priv->m_message_soup;
#line 23 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp4_ = _tmp3_->response_body;
#line 23 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp5_ = soup_message_body_flatten (_tmp4_);
#line 23 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp6_ = _tmp5_;
#line 23 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp7_ = _tmp6_->data;
#line 23 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp7__length1 = (gint) _tmp6_->length;
#line 23 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp8_ = ((const gchar*) _tmp7_) == NULL;
#line 23 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	__vala_SoupBuffer_free0 (_tmp6_);
#line 23 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	if (_tmp8_) {
#line 23 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp2_ = TRUE;
#line 252 "ReadabilityParserAPI.c"
	} else {
		SoupMessage* _tmp9_ = NULL;
		SoupMessageBody* _tmp10_ = NULL;
		SoupBuffer* _tmp11_ = NULL;
		SoupBuffer* _tmp12_ = NULL;
		guint8* _tmp13_ = NULL;
		gint _tmp13__length1 = 0;
#line 24 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp9_ = self->priv->m_message_soup;
#line 24 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp10_ = _tmp9_->response_body;
#line 24 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp11_ = soup_message_body_flatten (_tmp10_);
#line 24 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp12_ = _tmp11_;
#line 24 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp13_ = _tmp12_->data;
#line 24 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp13__length1 = (gint) _tmp12_->length;
#line 24 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp2_ = g_strcmp0 ((const gchar*) _tmp13_, "") == 0;
#line 24 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		__vala_SoupBuffer_free0 (_tmp12_);
#line 276 "ReadabilityParserAPI.c"
	}
#line 23 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	if (_tmp2_) {
#line 25 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		result = (gint) FEED_READER_CONNECTION_ERROR_NO_RESPONSE;
#line 25 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		return result;
#line 284 "ReadabilityParserAPI.c"
	}
	{
		JsonParser* _tmp14_ = NULL;
		SoupMessage* _tmp15_ = NULL;
		SoupMessageBody* _tmp16_ = NULL;
		SoupBuffer* _tmp17_ = NULL;
		SoupBuffer* _tmp18_ = NULL;
		guint8* _tmp19_ = NULL;
		gint _tmp19__length1 = 0;
#line 28 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp14_ = self->priv->m_parser;
#line 28 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp15_ = self->priv->m_message_soup;
#line 28 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp16_ = _tmp15_->response_body;
#line 28 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp17_ = soup_message_body_flatten (_tmp16_);
#line 28 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp18_ = _tmp17_;
#line 28 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp19_ = _tmp18_->data;
#line 28 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp19__length1 = (gint) _tmp18_->length;
#line 28 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		json_parser_load_from_data (_tmp14_, (const gchar*) _tmp19_, (gssize) (-1), &_inner_error_);
#line 28 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		__vala_SoupBuffer_free0 (_tmp18_);
#line 28 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 314 "ReadabilityParserAPI.c"
			goto __catch22_g_error;
		}
	}
	goto __finally22;
	__catch22_g_error:
	{
		GError* e = NULL;
		FeedReaderLogger* _tmp20_ = NULL;
		FeedReaderLogger* _tmp21_ = NULL;
		GError* _tmp22_ = NULL;
		const gchar* _tmp23_ = NULL;
#line 27 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		e = _inner_error_;
#line 27 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_inner_error_ = NULL;
#line 31 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp20_ = feed_reader_logger;
#line 31 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		feed_reader_logger_print (_tmp20_, FEED_READER_LOG_MESSAGE_ERROR, "Could not load response to Message to ttrss");
#line 32 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp21_ = feed_reader_logger;
#line 32 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp22_ = e;
#line 32 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp23_ = _tmp22_->message;
#line 32 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		feed_reader_logger_print (_tmp21_, FEED_READER_LOG_MESSAGE_ERROR, _tmp23_);
#line 33 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		result = (gint) FEED_READER_CONNECTION_ERROR_NO_RESPONSE;
#line 33 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_g_error_free0 (e);
#line 33 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		return result;
#line 348 "ReadabilityParserAPI.c"
	}
	__finally22:
#line 27 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 27 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 27 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		g_clear_error (&_inner_error_);
#line 27 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		return 0;
#line 359 "ReadabilityParserAPI.c"
	}
#line 36 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp24_ = self->priv->m_parser;
#line 36 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp25_ = json_parser_get_root (_tmp24_);
#line 36 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp26_ = json_node_get_object (_tmp25_);
#line 36 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp27_ = _json_object_ref0 (_tmp26_);
#line 36 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_json_object_unref0 (self->priv->m_root_object);
#line 36 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	self->priv->m_root_object = _tmp27_;
#line 38 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp28_ = self->priv->m_root_object;
#line 38 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp29_ = json_object_has_member (_tmp28_, "content");
#line 38 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	if (_tmp29_) {
#line 40 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		result = (gint) FEED_READER_CONNECTION_ERROR_SUCCESS;
#line 40 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		return result;
#line 383 "ReadabilityParserAPI.c"
	}
#line 43 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	result = (gint) FEED_READER_CONNECTION_ERROR_UNKNOWN;
#line 43 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	return result;
#line 389 "ReadabilityParserAPI.c"
}


gchar* feed_reader_readability_parser_api_getAuthor (FeedReaderReadabilityParserAPI* self) {
	gchar* result = NULL;
	JsonObject* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
#line 46 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 48 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp0_ = self->priv->m_root_object;
#line 48 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp1_ = json_object_has_member (_tmp0_, "author");
#line 48 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	if (_tmp1_) {
#line 405 "ReadabilityParserAPI.c"
		JsonObject* _tmp2_ = NULL;
		const gchar* _tmp3_ = NULL;
		gchar* _tmp4_ = NULL;
#line 50 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp2_ = self->priv->m_root_object;
#line 50 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp3_ = json_object_get_string_member (_tmp2_, "author");
#line 50 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp4_ = g_strdup (_tmp3_);
#line 50 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		result = _tmp4_;
#line 50 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		return result;
#line 419 "ReadabilityParserAPI.c"
	} else {
		const gchar* _tmp5_ = NULL;
		gchar* _tmp6_ = NULL;
#line 54 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp5_ = _ ("no Author");
#line 54 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp6_ = g_strdup (_tmp5_);
#line 54 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		result = _tmp6_;
#line 54 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		return result;
#line 431 "ReadabilityParserAPI.c"
	}
}


gchar* feed_reader_readability_parser_api_getTitle (FeedReaderReadabilityParserAPI* self) {
	gchar* result = NULL;
	JsonObject* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
#line 58 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 60 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp0_ = self->priv->m_root_object;
#line 60 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp1_ = json_object_has_member (_tmp0_, "title");
#line 60 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	if (_tmp1_) {
#line 448 "ReadabilityParserAPI.c"
		JsonObject* _tmp2_ = NULL;
		const gchar* _tmp3_ = NULL;
		gchar* _tmp4_ = NULL;
#line 62 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp2_ = self->priv->m_root_object;
#line 62 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp3_ = json_object_get_string_member (_tmp2_, "title");
#line 62 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp4_ = g_strdup (_tmp3_);
#line 62 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		result = _tmp4_;
#line 62 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		return result;
#line 462 "ReadabilityParserAPI.c"
	} else {
		const gchar* _tmp5_ = NULL;
		gchar* _tmp6_ = NULL;
#line 66 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp5_ = _ ("no Title");
#line 66 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp6_ = g_strdup (_tmp5_);
#line 66 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		result = _tmp6_;
#line 66 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		return result;
#line 474 "ReadabilityParserAPI.c"
	}
}


gchar* feed_reader_readability_parser_api_getPreview (FeedReaderReadabilityParserAPI* self) {
	gchar* result = NULL;
	JsonObject* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
#line 70 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 72 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp0_ = self->priv->m_root_object;
#line 72 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp1_ = json_object_has_member (_tmp0_, "excerpt");
#line 72 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	if (_tmp1_) {
#line 491 "ReadabilityParserAPI.c"
		JsonObject* _tmp2_ = NULL;
		const gchar* _tmp3_ = NULL;
		gchar* _tmp4_ = NULL;
#line 74 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp2_ = self->priv->m_root_object;
#line 74 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp3_ = json_object_get_string_member (_tmp2_, "excerpt");
#line 74 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp4_ = g_strdup (_tmp3_);
#line 74 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		result = _tmp4_;
#line 74 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		return result;
#line 505 "ReadabilityParserAPI.c"
	} else {
		const gchar* _tmp5_ = NULL;
		gchar* _tmp6_ = NULL;
#line 78 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp5_ = _ ("no Preview");
#line 78 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp6_ = g_strdup (_tmp5_);
#line 78 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		result = _tmp6_;
#line 78 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		return result;
#line 517 "ReadabilityParserAPI.c"
	}
}


gchar* feed_reader_readability_parser_api_getContent (FeedReaderReadabilityParserAPI* self) {
	gchar* result = NULL;
	JsonObject* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
#line 82 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 84 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp0_ = self->priv->m_root_object;
#line 84 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_tmp1_ = json_object_has_member (_tmp0_, "content");
#line 84 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	if (_tmp1_) {
#line 534 "ReadabilityParserAPI.c"
		JsonObject* _tmp2_ = NULL;
		const gchar* _tmp3_ = NULL;
		gchar* _tmp4_ = NULL;
#line 86 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp2_ = self->priv->m_root_object;
#line 86 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp3_ = json_object_get_string_member (_tmp2_, "content");
#line 86 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp4_ = g_strdup (_tmp3_);
#line 86 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		result = _tmp4_;
#line 86 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		return result;
#line 548 "ReadabilityParserAPI.c"
	} else {
		const gchar* _tmp5_ = NULL;
		gchar* _tmp6_ = NULL;
#line 90 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp5_ = _ ("no content");
#line 90 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		_tmp6_ = g_strdup (_tmp5_);
#line 90 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		result = _tmp6_;
#line 90 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
		return result;
#line 560 "ReadabilityParserAPI.c"
	}
}


static void feed_reader_readability_parser_api_class_init (FeedReaderReadabilityParserAPIClass * klass) {
#line 1 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	feed_reader_readability_parser_api_parent_class = g_type_class_peek_parent (klass);
#line 1 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	g_type_class_add_private (klass, sizeof (FeedReaderReadabilityParserAPIPrivate));
#line 1 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	G_OBJECT_CLASS (klass)->finalize = feed_reader_readability_parser_api_finalize;
#line 572 "ReadabilityParserAPI.c"
}


static void feed_reader_readability_parser_api_instance_init (FeedReaderReadabilityParserAPI * self) {
#line 1 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	self->priv = FEED_READER_READABILITY_PARSER_API_GET_PRIVATE (self);
#line 579 "ReadabilityParserAPI.c"
}


static void feed_reader_readability_parser_api_finalize (GObject* obj) {
	FeedReaderReadabilityParserAPI * self;
#line 1 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, FEED_READER_TYPE_READABILITY_PARSER_API, FeedReaderReadabilityParserAPI);
#line 3 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_g_object_unref0 (self->priv->m_session);
#line 4 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_g_object_unref0 (self->priv->m_message_soup);
#line 5 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_g_object_unref0 (self->priv->m_parser);
#line 6 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_json_object_unref0 (self->priv->m_root_object);
#line 7 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_g_free0 (self->priv->m_contenttype);
#line 8 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	_g_free0 (self->priv->m_token);
#line 1 "/home/samthomas/Development/Vala/feedreader/src/ContentGrabber/ReadabilityParserAPI.vala"
	G_OBJECT_CLASS (feed_reader_readability_parser_api_parent_class)->finalize (obj);
#line 601 "ReadabilityParserAPI.c"
}


GType feed_reader_readability_parser_api_get_type (void) {
	static volatile gsize feed_reader_readability_parser_api_type_id__volatile = 0;
	if (g_once_init_enter (&feed_reader_readability_parser_api_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FeedReaderReadabilityParserAPIClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) feed_reader_readability_parser_api_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FeedReaderReadabilityParserAPI), 0, (GInstanceInitFunc) feed_reader_readability_parser_api_instance_init, NULL };
		GType feed_reader_readability_parser_api_type_id;
		feed_reader_readability_parser_api_type_id = g_type_register_static (G_TYPE_OBJECT, "FeedReaderReadabilityParserAPI", &g_define_type_info, 0);
		g_once_init_leave (&feed_reader_readability_parser_api_type_id__volatile, feed_reader_readability_parser_api_type_id);
	}
	return feed_reader_readability_parser_api_type_id__volatile;
}



