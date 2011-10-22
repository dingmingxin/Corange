#ifndef SDL_LOCAL_H
#define SDL_LOCAL_H

#include "SDL/SDL.h"
#include "SDL/SDL_opengl.h"

#ifndef GLchar
  #define GLchar char
#endif
#ifndef GLsizeiptr
  #define GLsizeiptr int
#endif

typedef GLuint (APIENTRY * GLCREATESHADERFN)( GLenum type );
typedef GLuint (APIENTRY * GLCREATEPROGRAMFN)( void );
typedef void (APIENTRY * GLSHADERSOURCEFN)( GLuint shader, GLsizei count, const GLchar** string, const GLint* length );
typedef void (APIENTRY * GLCOMPILESHADERFN)( GLuint shader );
typedef void (APIENTRY * GLGETSHADERINFOLOGFN)( GLuint shader, GLsizei bufsize,GLsizei* length, GLchar* infolog );
typedef void (APIENTRY * GLATTACHSHADERFN)( GLuint program, GLuint shader );
typedef void (APIENTRY * GLLINKPROGRAMFN)( GLuint program );
typedef void (APIENTRY * GLGETPROGRAMINFOLOGFN)( GLuint program, GLsizei bufsize,GLsizei* length, GLchar* infolog );
typedef GLint (APIENTRY * GLGETUNIFORMLOCATIONFN)( GLuint program, const GLchar* name );
typedef void (APIENTRY * GLACTIVETEXTUREFN)( GLenum texture );
typedef void (APIENTRY * GLUNIFORM1FFN)( GLint location, GLfloat x );
typedef void (APIENTRY * GLUNIFORM1IFN)( GLint location, GLint x );
typedef void (APIENTRY * GLDELETESHADERFN)( GLuint shader );
typedef void (APIENTRY * GLDELETEPROGRAMFN)( GLuint program );
typedef void (APIENTRY * GLUSEPROGRAMFN)( GLuint program );
typedef void (APIENTRY * GLVERTEXATTRIBPOINTERFN)( GLuint indx, GLint size, GLenum type,GLboolean normalized, GLsizei stride, const GLvoid* ptr );
typedef void (APIENTRY * GLENABLEVERTEXATTRIBARRAYFN)( GLuint index );
typedef void (APIENTRY * GLDISABLEVERTEXATTRIBARRAYFN)( GLuint index );
typedef void (APIENTRY * GLUNIFORM2FFN)( GLint location, GLfloat x, GLfloat y);
typedef void (APIENTRY * GLUNIFORM3FFN)( GLint location, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * GLUNIFORM4FFN)( GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w );
typedef void (APIENTRY * GLUNIFORMMATRIX4FVFN)( GLint location, GLsizei count,GLboolean transpose, const GLfloat* value );
typedef void (APIENTRY * GLUNIFORM1FVFN)( GLint location, GLsizei count, const GLfloat* value );
typedef void (APIENTRY * GLUNIFORM2FVFN)( GLint location, GLsizei count, const GLfloat* value );
typedef void (APIENTRY * GLGETSHADERIVFN)( GLuint shader, GLenum pname, GLint* params );
typedef void (APIENTRY * GLGETPROGRAMIVFN)( GLuint program, GLenum pname, GLint* params );
typedef void (APIENTRY * GLBINDATTRIBLOCATIONFN)( GLuint program, GLuint index, const GLchar* name );
typedef void (APIENTRY * GLGENFRAMEBUFFERSFN)( GLsizei n, GLuint* ids );
typedef void (APIENTRY * GLBINDFRAMEBUFFERFN)( GLenum target, GLuint framebuffer );
typedef void (APIENTRY * GLFRAMEBUFFERTEXTURE2DFN)( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level );
typedef void (APIENTRY * GLDELETEFRAMEBUFFERSFN)( GLsizei n, GLuint* framebuffers );
typedef GLenum (APIENTRY * GLCHECKFRAMEBUFFERSTATUSFN)( GLenum target );
typedef void (APIENTRY * GLGENBUFFERSFN)( GLsizei n, GLuint* buffers );
typedef void (APIENTRY * GLGENRENDERBUFFERSFN)( GLsizei n, GLuint* buffers );
typedef void (APIENTRY * GLDELETEBUFFERSFN)( GLsizei n, const GLuint* buffers );
typedef void (APIENTRY * GLDELETERENDERBUFFERSFN)( GLsizei n, const GLuint* buffers );
typedef void (APIENTRY * GLBINDBUFFERFN)( GLenum target, GLuint buffer );
typedef void (APIENTRY * GLBINDRENDERBUFFERFN)( GLenum target, GLuint buffer );
typedef void (APIENTRY * GLBUFFERDATAFN)( GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage );
typedef void (APIENTRY * GLFRAMEBUFFERRENDERBUFFERFN)( GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer );
typedef GLint (APIENTRY * GLGETATTRIBLOCATIONFN)( GLuint program, const GLchar* name );
typedef void (APIENTRY * GLRENDERBUFFERSTORAGEFN)( GLenum target, GLenum format, GLsizei width, GLsizei height);
typedef void (APIENTRY * GLDRAWBUFFERSFN)(GLsizei n, const GLenum* buffers);
typedef void (APIENTRY * GLGENERATEMIPMAPFN)(GLenum target);
typedef void (APIENTRY * GLCOMPRESSEDTEXIMAGE2DFN)(GLenum target, GLint level, GLenum format, GLsizei width, GLsizei height, GLint border, GLsizei imagesize, const GLvoid* data);

extern GLCREATESHADERFN glCreateShader;
extern GLCREATEPROGRAMFN glCreateProgram;
extern GLSHADERSOURCEFN glShaderSource;
extern GLCOMPILESHADERFN glCompileShader;
extern GLGETSHADERINFOLOGFN glGetShaderInfoLog;
extern GLATTACHSHADERFN glAttachShader;
extern GLLINKPROGRAMFN glLinkProgram;
extern GLGETPROGRAMINFOLOGFN glGetProgramInfoLog;
extern GLGETUNIFORMLOCATIONFN glGetUniformLocation;
extern GLACTIVETEXTUREFN glActiveTexture;
extern GLUNIFORM1FFN glUniform1f;
extern GLUNIFORM1IFN glUniform1i;
extern GLDELETESHADERFN glDeleteShader;
extern GLDELETEPROGRAMFN glDeleteProgram;
extern GLUSEPROGRAMFN glUseProgram;
extern GLVERTEXATTRIBPOINTERFN glVertexAttribPointer;
extern GLENABLEVERTEXATTRIBARRAYFN glEnableVertexAttribArray;
extern GLDISABLEVERTEXATTRIBARRAYFN glDisableVertexAttribArray;
extern GLUNIFORM2FFN glUniform2f;
extern GLUNIFORM3FFN glUniform3f;
extern GLUNIFORM4FFN glUniform4f;
extern GLUNIFORMMATRIX4FVFN glUniformMatrix4fv;
extern GLUNIFORM1FVFN glUniform1fv;
extern GLUNIFORM2FVFN glUniform2fv;
extern GLGETSHADERIVFN glGetShaderiv;
extern GLGETPROGRAMIVFN glGetProgramiv;
extern GLBINDATTRIBLOCATIONFN glBindAttribLocation;
extern GLGENFRAMEBUFFERSFN glGenFramebuffers;
extern GLBINDFRAMEBUFFERFN glBindFramebuffer;
extern GLFRAMEBUFFERTEXTURE2DFN glFramebufferTexture2D;
extern GLDELETEFRAMEBUFFERSFN glDeleteFramebuffers;
extern GLCHECKFRAMEBUFFERSTATUSFN glCheckFramebufferStatus;
extern GLGENBUFFERSFN glGenBuffers;
extern GLGENRENDERBUFFERSFN glGenRenderbuffers;
extern GLDELETEBUFFERSFN glDeleteBuffers;
extern GLDELETERENDERBUFFERSFN glDeleteRenderbuffers;
extern GLBINDBUFFERFN glBindBuffer;
extern GLBINDRENDERBUFFERFN glBindRenderbuffer;
extern GLBUFFERDATAFN glBufferData;
extern GLFRAMEBUFFERRENDERBUFFERFN glFramebufferRenderbuffer;
extern GLGETATTRIBLOCATIONFN glGetAttribLocation;
extern GLRENDERBUFFERSTORAGEFN glRenderbufferStorage;
extern GLDRAWBUFFERSFN glDrawBuffers;
extern GLGENERATEMIPMAPFN glGenerateMipmap;
extern GLCOMPRESSEDTEXIMAGE2DFN glCompressedTexImage2D;

/* Found these from glew */

static GLuint GL_FRAMEBUFFER = 0x8D40;
static GLuint GL_RENDERBUFFER = 0x8D41;
static GLint GL_MAX_COLOR_ATTACHMENTS = 0x8CDF;
static GLenum GL_COLOR_ATTACHMENT0 = 0x8CE0;
static GLenum GL_COLOR_ATTACHMENT1 = 0x8CE1;
static GLenum GL_COLOR_ATTACHMENT2 = 0x8CE2;
static GLenum GL_COLOR_ATTACHMENT3 = 0x8CE3;
static GLenum GL_COLOR_ATTACHMENT4 = 0x8CE4;
static GLenum GL_COLOR_ATTACHMENT5 = 0x8CE5;
static GLenum GL_COLOR_ATTACHMENT6 = 0x8CE6;
static GLenum GL_COLOR_ATTACHMENT7 = 0x8CE7;
static GLenum GL_COLOR_ATTACHMENT8 = 0x8CE8;
static GLenum GL_COLOR_ATTACHMENT9 = 0x8CE9;
static GLenum GL_COLOR_ATTACHMENT10 = 0x8CEA;
static GLenum GL_COLOR_ATTACHMENT11 = 0x8CEB;
static GLenum GL_COLOR_ATTACHMENT12 = 0x8CEC;
static GLenum GL_COLOR_ATTACHMENT13 = 0x8CED;
static GLenum GL_COLOR_ATTACHMENT14 = 0x8CEE;
static GLenum GL_COLOR_ATTACHMENT15 = 0x8CEF;
static GLenum GL_DEPTH_ATTACHMENT = 0x8D00;
static GLenum GL_STENCIL_ATTACHMENT = 0x8D20;
static GLenum GL_RGBA32F = 0x8814;
static GLenum GL_RGBA16F = 0x881A;
static GLenum GL_BGRA = 0x80E1;
static GLenum GL_BGR = 0x80E0;
static GLenum GL_COMPRESSED_RGBA_S3TC_DXT1_EXT = 0x83F1;
static GLenum GL_COMPRESSED_RGBA_S3TC_DXT3_EXT = 0x83F2;
static GLenum GL_COMPRESSED_RGBA_S3TC_DXT5_EXT = 0x83F3;
static GLenum GL_UNSIGNED_SHORT_1_5_5_5_REV = 0x8366;
static GLenum GL_UNSIGNED_SHORT_5_6_5 = 0x8363;
static GLenum GL_DEPTH_COMPONENT24 = 0x81A6;
static GLint GL_CLAMP_TO_EDGE = 0x812F;
static GLenum GL_TEXTURE0 = 0x84C0;
static GLenum GL_ARRAY_BUFFER = 0x8892;
static GLenum GL_ELEMENT_ARRAY_BUFFER = 0x8893;
static GLenum GL_MULTISAMPLE = 0x809D;
static GLenum GL_STATIC_DRAW = 0x88E4;
static GLenum GL_GENERATE_MIPMAP = 0x8191;
static GLenum GL_VERTEX_SHADER = 0x8B31;
static GLenum GL_FRAGMENT_SHADER = 0x8B30;
static GLenum GL_TEXTURE_MAX_LEVEL = 0x813D;

#endif