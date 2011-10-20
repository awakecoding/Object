
#ifndef __OBJECT_H
#define __OBJECT_H

#define oDeclareClass(_class)				typedef struct o##_class##_Self o##_class##_Type
#define oDeclareMethod(_class, _type, _method, ...)	typedef _type (*p##_class##_##_method)(o##_class##_Type* o##_class##_Self, ## __VA_ARGS__)

#define oDefineClass(_class)				struct o##_class##_Self
#define oInstanceMethod(_class, _method)		p##_class##_##_method _method
#define oMethod(_class, _type, _method, ...)		_type _class##_##_method(o##_class##_Type* o##_class##_Self, ## __VA_ARGS__)

#define oDefineParent(_parent)				o##_parent##_Type o##_parent##_Self
#define oRegisterMethod(_class, _method)		o##_class##_Self->_method = _class##_##_method
#define oOverrideMethod(_class, _parent, _method)	((o##_parent##_Type*) o##_class##_Self)->_method = (p##_parent##_##_method) _class##_##_method

#define oDefineConstructor(_class) \
o##_class##_Type* _class##_New() \
{ \
	o##_class##_Type* o##_class##_Self; \
	o##_class##_Self = (o##_class##_Type*) malloc(sizeof(o##_class##_Type)); \
	_class##_Init(o##_class##_Self); \
	return o##_class##_Self; \
}

#endif /* __OBJECT_H */
