//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSString, NSURL, NSURLRequest, QLPreviewItemAVState, UIAlertView, _UIHostedWindow;

@protocol QLPreviewItemInteractionDelegate <NSObject>
- (void)previewItemDidExitFullScreen:(id <QLPreviewItem>)arg1;
- (void)previewItem:(id <QLPreviewItem>)arg1 willEnterFullScreenWithHostedWindow:(_UIHostedWindow *)arg2;
- (void)previewItem:(id <QLPreviewItem>)arg1 setAVState:(QLPreviewItemAVState *)arg2;
- (UIAlertView *)clientProcessAlertViewForPreviewItem:(id <QLPreviewItem>)arg1;
- (void)previewItem:(id <QLPreviewItem>)arg1 receivedTapOnURL:(NSURL *)arg2;
- (NSURLRequest *)previewItem:(id <QLPreviewItem>)arg1 willSendRequest:(NSURLRequest *)arg2;
- (void)previewItemDidLoad:(id <QLPreviewItem>)arg1 atIndex:(int)arg2 withError:(NSError *)arg3;
- (void)previewItem:(id <QLPreviewItem>)arg1 requiresDisplayBundle:(NSString *)arg2 withHints:(NSDictionary *)arg3;
- (void)previewItemWillLoad:(id <QLPreviewItem>)arg1;
- (void)previewItem:(id <QLPreviewItem>)arg1 willHideOverlayWithDuration:(double)arg2;
- (void)previewItem:(id <QLPreviewItem>)arg1 willShowOverlayWithDuration:(double)arg2;
- (void)showContentsWasTappedForPreviewItem:(id <QLPreviewItem>)arg1;
- (void)overlayWasInteractedWithOnPreviewItem:(id <QLPreviewItem>)arg1;
- (void)viewDidUpdateForPreviewItem:(id <QLPreviewItem>)arg1;
- (void)viewWasTappedOnPreviewItem:(id <QLPreviewItem>)arg1;
@end
