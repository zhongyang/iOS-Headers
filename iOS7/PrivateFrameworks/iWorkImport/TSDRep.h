/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TSDMagicMoveMatching-Protocol.h"

@class CALayer, NSArray, NSDictionary, NSObject<OS_dispatch_queue>, TSDCanvas, TSDInteractiveCanvasController, TSDKnobTracker, TSDLayout, TSDLayoutGeometry, TSDRep<TSDContainerRep>, TSDTextureContext, TSDTextureSet, TSDTilingBackgroundQueue;

// Not exported
@interface TSDRep : NSObject <TSDMagicMoveMatching>
{
    TSDCanvas *mCanvas;
    TSDRep<TSDContainerRep> *mParentRep;
    NSArray *mKnobs;
    _Bool mKnobPositionsInvalid;
    _Bool mShowKnobsWhenManipulated;
    _Bool mKnobsAreShowing;
    TSDKnobTracker *mKnobTracker;
    _Bool mSelectionHighlightLayerValid;
    CALayer *mSelectionHighlightLayer;
    unsigned long long mTextureDeliveryStyle;
    int mTextureByGlyphStyle;
    TSDTextureContext *mTextureContext;
    unsigned long long mTextureStage;
    NSDictionary *mTextureActionAttributes;
    NSDictionary *mTextureAnimationInfo;
    _Bool mShowTemporaryHighlight;
    CALayer *mTemporaryHighlightLayer;
    _Bool mShowDragAndDropHighlight;
    CALayer *mDragAndDropHighlightLayer;
    TSDLayout *mTemporaryMixingLayout;
    TSDLayout *mLayout;
    TSDTextureSet *mTexture;
    struct CGColor *mDefaultSelectionHighlightColor;
    TSDLayoutGeometry *mLastGeometryInRoot;
    struct CGRect mOriginalLayerFrameInScaledCanvas;
    TSDTilingBackgroundQueue *mTileQueue;
    long long mTileQueueOnce;
    long long mTileProviderQueueLock;
    NSObject<OS_dispatch_queue> *mTileProviderQueue;
}

@property(retain, nonatomic) NSDictionary *textureAnimationInfo; // @synthesize textureAnimationInfo=mTextureAnimationInfo;
@property(nonatomic) NSDictionary *textureActionAttributes; // @synthesize textureActionAttributes=mTextureActionAttributes;
@property(nonatomic) unsigned long long textureStage; // @synthesize textureStage=mTextureStage;
@property(copy, nonatomic) TSDTextureContext *textureContext; // @synthesize textureContext=mTextureContext;
@property(nonatomic) int textureByGlyphStyle; // @synthesize textureByGlyphStyle=mTextureByGlyphStyle;
@property(nonatomic) unsigned long long textureDeliveryStyle; // @synthesize textureDeliveryStyle=mTextureDeliveryStyle;
@property(retain, nonatomic) TSDTextureSet *texture; // @synthesize texture=mTexture;
@property(nonatomic) TSDKnobTracker *currentKnobTracker; // @synthesize currentKnobTracker=mKnobTracker;
@property(nonatomic) TSDRep<TSDContainerRep> *parentRep; // @synthesize parentRep=mParentRep;
@property(retain, nonatomic) TSDLayout *temporaryMixingLayout; // @synthesize temporaryMixingLayout=mTemporaryMixingLayout;
@property(readonly, nonatomic) TSDCanvas *canvas; // @synthesize canvas=mCanvas;
@property(readonly, nonatomic) NSArray *hyperlinkRegions;
- (_Bool)wantsToDistortWithImagerContext;
- (void)i_shutdownTileQueue;
- (id)i_tileQueue;
- (void)performDrawBlock:(id)arg1;
- (id)i_queueForTileProvider;
- (_Bool)mustDrawOnMainThreadForInteractiveCanvas;
- (_Bool)canDrawInParallel;
- (_Bool)canDrawInBackgroundDuringScroll;
- (int)tilingMode;
- (_Bool)directlyManagesLayerContent;
- (struct CGPoint)centerForRotation;
- (struct CGRect)boundsForResizeGuideUI;
- (_Bool)wantsGuidesWhileResizing;
- (id)infoForTransforming;
- (_Bool)resizeFromCenterOnly;
- (double)opacity;
- (unsigned long long)adjustedKnobForComputingResizeGeometry:(unsigned long long)arg1;
- (id)resizedGeometryForTransform:(struct CGAffineTransform)arg1;
- (struct CGRect)targetRectForEditMenu;
- (id)itemsToAddToEditMenu;
- (_Bool)handlesEditMenu;
- (_Bool)isLocked;
- (_Bool)isPlaceholder;
- (_Bool)isSelectable;
- (int)dragHUDAndGuidesTypeAtCanvasPoint:(struct CGPoint)arg1;
- (int)dragTypeAtCanvasPoint:(struct CGPoint)arg1;
- (_Bool)shouldShowSizesInRulers;
- (_Bool)shouldShowDragHUD;
- (_Bool)isDraggable;
- (_Bool)isOpaque;
- (_Bool)masksToBounds;
- (id)allLayers;
- (void)invalidateAnnotationColor;
- (void)invalidateComments;
- (id)commentHighlightLayer;
- (_Bool)shouldShowCommentHighlight;
- (id)additionalLayersOverLayer;
- (id)additionalLayersUnderLayer;
- (void)didUpdateLayer:(id)arg1;
- (void)willUpdateLayer:(id)arg1;
- (_Bool)canEditWithEditor:(id)arg1;
- (id)beginEditing;
- (void)willBeRemoved;
- (void)processChangedProperty:(int)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (_Bool)repDirectlyManagesContentsScaleOfLayer:(id)arg1;
- (_Bool)mustDrawTilingLayerOnMainThread:(id)arg1;
- (_Bool)canDrawTilingLayerInBackground:(id)arg1;
- (_Bool)shouldLayoutTilingLayer:(id)arg1;
- (id)textureForContext:(id)arg1;
- (void)p_setMagicMoveTextureAttributes:(id)arg1;
- (struct CGAffineTransform)unRotatedTransform:(struct CGAffineTransform)arg1;
- (void)markTextureDirty;
@property(readonly, nonatomic) double textureAngle;
- (_Bool)wantsToHandleTapsWhenLocked;
- (_Bool)wantsToHandleTapsOnContainingGroup;
- (_Bool)canClipThemeContentToCanvas;
- (_Bool)handleDoubleTapAtPoint:(struct CGPoint)arg1;
- (_Bool)handleSingleTapAtPoint:(struct CGPoint)arg1;
- (_Bool)shouldIgnoreSingleTapAtPoint:(struct CGPoint)arg1 withRecognizer:(id)arg2;
- (_Bool)shouldIgnoreEditMenuTapAtPoint:(struct CGPoint)arg1 withRecognizer:(id)arg2;
- (_Bool)wantsEditMenuForTapAtPoint:(struct CGPoint)arg1 onKnob:(id)arg2;
- (_Bool)handleDoubleTapAtPoint:(struct CGPoint)arg1 onKnob:(id)arg2;
- (_Bool)handleSingleTapAtPoint:(struct CGPoint)arg1 onKnob:(id)arg2;
- (id)newCommandToApplyGeometry:(id)arg1 toInfo:(id)arg2;
- (void)dynamicResizeDidEndWithTracker:(id)arg1;
- (void)dynamicallyResizingWithTracker:(id)arg1;
- (_Bool)isBeingResized;
- (id)dynamicResizeDidBegin;
- (void)dynamicRotateDidEndWithTracker:(id)arg1;
- (void)p_dynamicRotateDidEnd;
- (void)dynamicallyRotatingWithTracker:(id)arg1;
- (struct CGPoint)unscaledGuidePosition;
- (double)angleForRotation;
- (_Bool)isBeingRotated;
- (void)p_dynamicRotateDidBegin;
- (void)dynamicRotateDidBegin;
- (_Bool)demandsExclusiveSelection;
- (void)endDragInsertFromPalette;
- (void)beginDragInsertFromPalette;
- (_Bool)allowRotateDelegate;
- (_Bool)allowResizeDelegate;
- (_Bool)allowDragDelegate;
- (void)dynamicDragDidEnd;
- (struct CGRect)i_originalLayerFrameInScaledCanvas;
- (struct CGPoint)i_dragOffset;
- (void)i_dynamicDragDidEnd;
- (_Bool)resetGuidesAfterDragAfterReset;
- (_Bool)exclusivelyProvidesGuidesWhileAligning;
- (_Bool)providesGuidesWhileAligning;
- (struct CGRect)snapRectForDynamicDragWithOffset:(struct CGPoint)arg1;
- (_Bool)isBeingDragged;
- (void)p_dynamicDragDidBegin;
- (void)dynamicDragDidBegin;
- (_Bool)isInDynamicOperation;
- (void)p_dynamicOperationDidEnd;
- (void)dynamicOperationDidEnd;
- (void)p_dynamicOperationDidBegin;
- (void)dynamicOperationDidBegin;
- (id)popoutLayers;
- (id)overlayLayers;
- (id)p_addLayersForKnobsToArray:(id)arg1 withDelegate:(id)arg2;
- (struct CGPoint)convertKnobPositionToUnscaledCanvas:(struct CGPoint)arg1;
- (void)i_invalidateSelectionHighlightLayer;
- (id)selectionHighlightLayer;
- (struct CGAffineTransform)transformForHighlightLayer;
- (struct CGRect)boundsForHighlightLayer;
@property(nonatomic) struct CGColor *selectionHighlightColor;
- (double)selectionHighlightWidth;
- (_Bool)directlyManagesVisibilityOfKnob:(id)arg1;
- (void)fadeKnobsOut;
- (void)fadeKnobsIn;
- (void)turnKnobsOn;
- (void)showKnobsDuringManipulation:(_Bool)arg1;
- (_Bool)shouldShowKnobs;
- (_Bool)shouldDisplayHyperlinkUI;
@property(readonly, nonatomic) _Bool isEditingPath;
- (_Bool)shouldCreateCommentKnob;
- (_Bool)shouldCreateLockedKnobs;
- (_Bool)shouldCreateSelectionKnobs;
- (_Bool)shouldCreateKnobs;
- (_Bool)shouldShowSelectionHighlight;
- (double)additionalRotationForKnobOrientation;
- (id)knobForTag:(unsigned long long)arg1;
- (void)p_actionGhostKnobHit;
- (void)p_toggleHyperlinkUIVisibility;
- (void)p_toggleCommentVisibility;
- (id)newTrackerForKnob:(id)arg1;
- (void)invalidateKnobPositions;
- (struct CGPoint)positionOfStandardKnob:(id)arg1 forBounds:(struct CGRect)arg2;
- (struct CGPoint)positionOfActionGhostKnob;
- (struct CGPoint)positionOfHyperlinkKnob;
- (void)updatePositionsOfKnobs:(id)arg1;
- (struct CGRect)p_trackingBoundsForStandardKnobs;
- (struct CGRect)boundsForStandardKnobs;
- (_Bool)canUseSpecializedHitRegionForKnob:(id)arg1;
- (void)p_addActionGhostKnobToArrayIfNecessary:(id)arg1;
- (void)addHyperlinkKnobToArray:(id)arg1;
- (void)addCommentKnobToArray:(id)arg1;
- (void)addLockedKnobsToArray:(id)arg1;
- (void)addSelectionKnobsToArray:(id)arg1;
- (id)newSelectionKnobForType:(int)arg1 tag:(unsigned long long)arg2;
- (void)addKnobsToArray:(id)arg1;
- (unsigned long long)enabledKnobMask;
- (void)invalidateKnobs;
@property(readonly, nonatomic) NSArray *knobs;
- (void)becameNotSelected;
- (void)becameSelected;
- (_Bool)isSelected;
- (_Bool)isSelectedIgnoringLocking;
- (void)endDrawingOperation;
- (void)beginDrawingOperation;
- (void)recursivelyDrawChildrenInContext:(struct CGContext *)arg1;
- (void)recursivelyDrawInContext:(struct CGContext *)arg1;
- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (struct CGRect)clipRect;
- (_Bool)isDrawingInFlippedContext;
- (void)didDrawInLayer:(id)arg1 context:(struct CGContext *)arg2;
- (void)drawInLayerContext:(struct CGContext *)arg1;
- (void)setupForDrawingInLayer:(id)arg1 context:(struct CGContext *)arg2;
- (id)colorBehindLayer:(id)arg1;
- (Class)layerClass;
- (void)viewScrollingEnded;
- (void)viewScrollDidChange;
- (void)viewScaleDidChange;
- (void)screenScaleDidChange;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (void)processChanges:(id)arg1;
- (void)computeDirectLayerFrame:(struct CGRect *)arg1 andTransform:(struct CGAffineTransform *)arg2 basedOnLayoutGeometry:(id)arg3;
- (void)computeDirectLayerFrame:(struct CGRect *)arg1 andTransform:(struct CGAffineTransform *)arg2;
- (void)computeDirectLayerFrame:(struct CGRect *)arg1 andTransform:(struct CGAffineTransform *)arg2 basedOnTransform:(struct CGAffineTransform)arg3 andSize:(struct CGSize)arg4;
- (void)antiAliasDefeatLayerFrame:(struct CGRect *)arg1 forTransform:(struct CGAffineTransform)arg2;
- (void)antiAliasDefeatLayerTransform:(struct CGAffineTransform *)arg1 forFrame:(struct CGRect)arg2;
- (void)updateLayerGeometryFromLayout:(id)arg1;
- (struct CGAffineTransform)layerTransformInRootForZeroAnchor;
- (struct CGAffineTransform)parentLayerInverseTransformInRootForZeroAnchor;
- (struct CGAffineTransform)layerTransform;
- (void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(_Bool)arg3;
- (void)updateFromLayout;
- (void)updateChildrenFromLayout;
- (id)repForHandleSingleTap;
- (id)repForRotating;
- (id)repForSelecting;
- (id)additionalRepsForDragging;
- (id)repForDragging;
- (_Bool)intersectsUnscaledRect:(struct CGRect)arg1;
- (double)shortestDistanceToPoint:(struct CGPoint)arg1 countAsHit:(_Bool *)arg2;
- (_Bool)shouldExpandHitRegionWhenSmall;
- (id)hitRepChrome:(struct CGPoint)arg1;
- (id)hitRepChrome:(struct CGPoint)arg1 passingTest:(id)arg2;
- (id)hitReps:(struct CGPoint)arg1 withSlopBlock:(id)arg2;
- (id)hitReps:(struct CGPoint)arg1 withSlop:(struct CGSize)arg2;
- (id)hitRep:(struct CGPoint)arg1;
- (id)hitRep:(struct CGPoint)arg1 passingTest:(id)arg2;
- (_Bool)containsPoint:(struct CGPoint)arg1 withSlop:(struct CGSize)arg2;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;
- (struct CGRect)convertNaturalRectFromLayerRelative:(struct CGRect)arg1;
- (struct CGRect)convertNaturalRectToLayerRelative:(struct CGRect)arg1;
- (struct CGPoint)convertNaturalPointFromLayerRelative:(struct CGPoint)arg1;
- (struct CGPoint)convertNaturalPointToLayerRelative:(struct CGPoint)arg1;
- (struct CGAffineTransform)transformToConvertNaturalFromLayerRelative;
- (struct CGAffineTransform)transformToConvertNaturalToLayerRelative;
- (struct CGPoint)layerOffsetForDragging;
- (struct CGRect)layerFrameInScaledCanvasRelativeToParent;
- (struct CGRect)i_layerFrameInScaledCanvasIgnoringDragging;
- (struct CGRect)layerFrameInScaledCanvas;
- (struct CGRect)frameInScreenSpace;
- (struct CGRect)frameInUnscaledCanvasIncludingChrome;
- (struct CGRect)frameInUnscaledCanvas;
- (struct CGPoint)convertNaturalPointFromUnscaledCanvas:(struct CGPoint)arg1;
- (struct CGPoint)convertNaturalPointToUnscaledCanvas:(struct CGPoint)arg1;
- (struct CGPath *)newPathInScaledCanvasFromNaturalRect:(struct CGRect)arg1;
- (struct CGRect)convertNaturalRectFromUnscaledCanvas:(struct CGRect)arg1;
- (struct CGRect)convertNaturalRectToUnscaledCanvas:(struct CGRect)arg1;
- (struct CGRect)naturalBounds;
- (double)angleInRoot;
- (void)addToSet:(id)arg1;
- (id)parentRepToPerformSelecting;
- (void)i_willEnterForeground;
- (void)i_willBeRemoved;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
- (id)connectedReps;
- (id)commandController;
- (id)info;
@property(readonly, nonatomic) TSDLayout *layout; // @synthesize layout=mLayout;
@property(readonly, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController;
- (_Bool)i_hasInteractiveCanvasController;
- (id)description;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end

