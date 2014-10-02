//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAEAGLLayer, EAGLContext, PLGLLayerDelegate;

@interface PLGLView : UIView
{
    unsigned int _framebuffer;
    unsigned int _renderbuffer;
    CAEAGLLayer *_glLayer;
    PLGLLayerDelegate *_glLayerDelegate;
    BOOL _disableLayoutForGLLayer;
    BOOL __atomicRetainedBacking;
    BOOL __shouldDeleteFramebuffer;
    BOOL __disableLayoutForGLLayerInternal;
    int _drawableWidth;
    int _drawableHeight;
    CDUnknownBlockType _renderNotifyBlock;
    EAGLContext *__atomicContext;
    struct CGSize __atomicFixedSize;
}

@property(nonatomic, getter=_isDisabledLayoutForGLLayerInternal, setter=_setDisableLayoutForGLLayerInternal:) BOOL _disableLayoutForGLLayerInternal; // @synthesize _disableLayoutForGLLayerInternal=__disableLayoutForGLLayerInternal;
@property(setter=_setShouldDeleteFramebuffer:) BOOL _shouldDeleteFramebuffer; // @synthesize _shouldDeleteFramebuffer=__shouldDeleteFramebuffer;
@property(setter=_setAtomicFixedSize:) struct CGSize _atomicFixedSize; // @synthesize _atomicFixedSize=__atomicFixedSize;
@property(setter=_setAtomicRetainedBacking:) BOOL _atomicRetainedBacking; // @synthesize _atomicRetainedBacking=__atomicRetainedBacking;
@property(retain, setter=_setAtomicContext:) EAGLContext *_atomicContext; // @synthesize _atomicContext=__atomicContext;
@property(copy, nonatomic) CDUnknownBlockType renderNotifyBlock; // @synthesize renderNotifyBlock=_renderNotifyBlock;
@property int drawableHeight; // @synthesize drawableHeight=_drawableHeight;
@property int drawableWidth; // @synthesize drawableWidth=_drawableWidth;
@property(nonatomic, getter=isDisabledLayoutForGLLayer) BOOL disableLayoutForGLLayer; // @synthesize disableLayoutForGLLayer=_disableLayoutForGLLayer;
@property(readonly, nonatomic) CAEAGLLayer *glLayer; // @synthesize glLayer=_glLayer;
- (void)_layoutGLLayer;
- (void)layoutSubviews;
- (void)setContentScaleFactor:(float)arg1;
- (void)forceDestroyGLResources;
- (void)renderPixelBuffer:(struct __CVBuffer *)arg1 ciContext:(id)arg2 mirrorRendering:(BOOL)arg3;
- (void)_handleRenderNotifyBlock;
- (void)renderWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)_setFramebuffer:(char *)arg1 context:(id)arg2;
- (void)_deleteFramebufferInContext:(id)arg1;
- (void)_createFramebufferInContext:(id)arg1;
- (void)setContentMode:(int)arg1;
@property(nonatomic) struct CGSize fixedSize;
@property(retain, nonatomic) EAGLContext *context;
@property(nonatomic) BOOL retainedBacking;
- (void)_configureLayer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
