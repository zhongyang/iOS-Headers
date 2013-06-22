/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "ADStoryboardWebViewDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"

@class ADBannerData, ADStoryboardWebView, NSString, UIButton, UIPopoverController, UIProgressView;

@interface ADStoryboardController : UIViewController <ADStoryboardWebViewDelegate, UIPopoverControllerDelegate>
{
    ADBannerData *_bannerData;
    unsigned int _impressionSequence;
    unsigned int _overclickCount;
    struct CGPoint _tapLocation;
    struct CGRect _bannerRectOnScreen;
    id <ADStoryboardControllerDelegate> _delegate;
    struct CGRect _screenBounds;
    NSString *_authenticationUserName;
    BOOL _orientationLocked;
    ADStoryboardWebView *_webView;
    UIButton *_dismissButton;
    UIProgressView *_progressView;
    UIPopoverController *_popover;
    double _startTime;
    BOOL _contentIsFullyLoaded;
    BOOL _playingFullScreenVideo;
    BOOL _hasAppeared;
    BOOL _privilegedClient;
    BOOL _hasStartedFirstLoad;
    BOOL _usingAuthoredTransition;
    BOOL _authoredTransitionInProgress;
    BOOL _adIsDismissing;
    unsigned int _contentSupportedInterfaceOrientations;
    unsigned int _actualSupportedInterfaceOrientations;
}

+ (id)sharedDownloader;
@property(nonatomic) unsigned int actualSupportedInterfaceOrientations; // @synthesize actualSupportedInterfaceOrientations=_actualSupportedInterfaceOrientations;
@property(nonatomic) unsigned int contentSupportedInterfaceOrientations; // @synthesize contentSupportedInterfaceOrientations=_contentSupportedInterfaceOrientations;
@property BOOL adIsDismissing; // @synthesize adIsDismissing=_adIsDismissing;
@property BOOL authoredTransitionInProgress; // @synthesize authoredTransitionInProgress=_authoredTransitionInProgress;
@property(nonatomic) BOOL usingAuthoredTransition; // @synthesize usingAuthoredTransition=_usingAuthoredTransition;
@property BOOL hasStartedFirstLoad; // @synthesize hasStartedFirstLoad=_hasStartedFirstLoad;
@property(nonatomic, getter=isPrivilegedClient) BOOL privilegedClient; // @synthesize privilegedClient=_privilegedClient;
@property BOOL hasAppeared; // @synthesize hasAppeared=_hasAppeared;
@property(readonly, nonatomic) BOOL playingFullScreenVideo; // @synthesize playingFullScreenVideo=_playingFullScreenVideo;
@property BOOL contentIsFullyLoaded; // @synthesize contentIsFullyLoaded=_contentIsFullyLoaded;
@property double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) UIPopoverController *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) ADStoryboardWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) NSString *authenticationUserName; // @synthesize authenticationUserName=_authenticationUserName;
@property(nonatomic) struct CGRect screenBounds; // @synthesize screenBounds=_screenBounds;
@property(nonatomic) id <ADStoryboardControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property struct CGRect bannerRectOnScreen; // @synthesize bannerRectOnScreen=_bannerRectOnScreen;
@property struct CGPoint tapLocation; // @synthesize tapLocation=_tapLocation;
@property unsigned int overclickCount; // @synthesize overclickCount=_overclickCount;
@property unsigned int impressionSequence; // @synthesize impressionSequence=_impressionSequence;
@property(retain, nonatomic) ADBannerData *bannerData; // @synthesize bannerData=_bannerData;
- (id)bannerParameters;
- (void)webViewDidTakeScreenShot:(id)arg1;
- (void)webViewWillTakeScreenShot:(id)arg1;
- (id)storyboardWebViewHumanReadableContentName:(id)arg1;
- (BOOL)popoverControllerShouldDismissPopover:(id)arg1;
- (void)webView:(id)arg1 requestsDismissPopoverViewControllerAnimated:(BOOL)arg2;
- (void)webView:(id)arg1 requestsDismissModalViewControllerAnimated:(BOOL)arg2;
- (void)webView:(id)arg1 requestsPresentPopoverViewController:(id)arg2 fromRect:(struct CGRect)arg3 animated:(BOOL)arg4;
- (void)webView:(id)arg1 requestsPresentModalViewController:(id)arg2 animated:(BOOL)arg3;
- (void)getRotationContentSettings:(CDStruct_af7d35ee *)arg1 forWindow:(id)arg2;
- (void)storyboardWebViewContentRequestsGeolocation:(id)arg1 approval:(id)arg2;
- (void)storyboardWebViewPrivilegedAdWantsToDismiss:(id)arg1;
- (void)adWebView:(id)arg1 hadScriptErrorWithInfo:(id)arg2;
- (void)adWebView:(id)arg1 retrievedResourceAtURL:(id)arg2 downloadTime:(float)arg3;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webViewContentSignalsReady:(id)arg1;
- (void)webView:(id)arg1 didReportSystemEventWithType:(int)arg2;
- (void)webView:(id)arg1 didReportEventWithMessage:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)storyboardWebView:(id)arg1 didChangeSupportedInterfaceOrientations:(unsigned int)arg2;
- (void)videoPlayerExitedFullScreen:(id)arg1;
- (void)_restoreWebViewIfNecessary;
- (void)videoPlayerWentFullScreen:(id)arg1;
- (void)_unlockOrientation;
- (void)_lockToAllOrientations;
- (void)_lockToCurrentOrientation;
- (void)_handleLowMemory:(id)arg1;
- (void)authoredTransitionInComplete;
- (void)_showDismissButton;
- (id)_dismissButtonForOrientation:(int)arg1;
- (void)_handleDismissButton;
- (void)_dismissKeyboard;
- (void)adWillDismiss;
- (void)clientApplicationDidBecomeActive;
- (void)clientApplicationDidResignActive;
- (void)insertTransitionView:(id)arg1;
- (void)updateProgress:(id)arg1;
- (void)_loadWebContent;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_teardownAudio;
- (void)_setupAudio;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)loadView;
@property(readonly, nonatomic) BOOL isBusy;
@property(nonatomic, getter=isOrientationLocked) BOOL orientationLocked; // @synthesize orientationLocked=_orientationLocked;
- (void)dealloc;

@end
