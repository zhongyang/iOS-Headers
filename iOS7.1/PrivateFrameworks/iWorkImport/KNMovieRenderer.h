//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/KNBuildRenderer.h>

#import "TSKAVPlayerControllerDelegate.h"

@class CALayer, NSObject<NSCopying>, TSKAVPlayerController;

__attribute__((visibility("hidden")))
@interface KNMovieRenderer : KNBuildRenderer <TSKAVPlayerControllerDelegate>
{
    TSKAVPlayerController *mPlayerController;
    CALayer *mVideoLayer;
    double mStartTime;
    double mPlaybackAtStartTimePauseTime;
    double mPlaybackAtStartTimePauseOffset;
    KNBuildRenderer *mBuildInRenderer;
    id <TSDMovieHUDViewController> mViewController;
    struct CGRect mFrameInContainerView;
    id mMovieStartCallbackTarget;
    SEL mMovieStartCallbackSelector;
    unsigned int mHasMoviePlaybackStarted:1;
    unsigned int mNeedsToSendMovieStartCallback:1;
    unsigned int mNeedsToSendBuildEndCallback:1;
    unsigned int mIsObservingVideoLayerReadyForDisplay:1;
    unsigned int mNeedsPlaybackAtStartTime:1;
    unsigned int mHasPendingTogglePlayingControl:1;
    unsigned int mPendingTogglePlayingControlStartsPlaying:1;
    unsigned int mShouldMoviePlaybackEndOnCompletion:1;
    unsigned int mWasMoviePlayingBeforeAnimationPause:1;
}

+ (id)movieInfoForMovieTimelineMovieIdentifier:(id)arg1;
+ (id)movieTimelineMovieIdentifierForMovieInfo:(id)arg1;
@property(retain, nonatomic) id <TSDMovieHUDViewController> viewController; // @synthesize viewController=mViewController;
@property(readonly, nonatomic) TSKAVPlayerController *playerController; // @synthesize playerController=mPlayerController;
@property(nonatomic) KNBuildRenderer *buildInRenderer; // @synthesize buildInRenderer=mBuildInRenderer;
@property(readonly, nonatomic) NSObject<NSCopying> *movieTimelineMovieIdentifier;
@property(readonly, nonatomic) CALayer *offscreenVideoLayer;
- (void)playbackDidStopForPlayerController:(id)arg1;
- (void)playerController:(id)arg1 playbackDidFailWithError:(id)arg2;
- (void)updateHUD;
- (void)setFrameOnViewLayer:(id)arg1;
- (void)p_applyActionEffect:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)p_playbackDidFailWithError:(id)arg1;
- (void)applyMovieControl:(int)arg1;
- (struct CGImage *)p_copyCurrentVideoFrameImage;
- (void)p_teardownUpdatingTexture:(BOOL)arg1;
- (void)p_setupReflectionAndMaskingOnMovieTexture:(id)arg1 strokeTexture:(id)arg2 reflectionTexture:(id)arg3;
- (void)p_showVideoLayer;
- (void)p_cancelPlaybackAtStartTime;
- (void)p_startPlaybackAtStartTime;
- (void)p_unschedulePlaybackAtStartTime;
- (void)p_schedulePlaybackAtStartTime;
- (void)p_setupVideoLayer;
- (void)p_setupPlayerController;
- (void)p_didEndMoviePlayback;
- (void)p_didStartMoviePlayback;
- (void)registerForMovieStartCallback:(SEL)arg1 target:(id)arg2;
- (void)p_startMoviePlaybackIfNeeded;
@property(readonly, nonatomic) BOOL hasMoviePlaybackStarted;
- (void)interruptAndReset;
- (void)resumeAnimationsIfPausedAtTime:(double)arg1;
- (void)resumeAnimationsIfPaused;
- (void)pauseAnimationsAtTime:(double)arg1;
- (void)pauseAnimations;
- (void)stopAnimations;
- (void)forceRemoveAnimations;
- (void)removeAnimationsAndFinish:(BOOL)arg1;
- (void)updateAnimationsForLayerTime:(double)arg1;
- (BOOL)addAnimationsAtLayerTime:(double)arg1;
- (void)animateAfterDelay:(double)arg1;
- (void)dealloc;
- (id)initWithInfo:(id)arg1 build:(id)arg2 stageIndex:(int)arg3 session:(id)arg4 model:(id)arg5 animatedSlideView:(id)arg6;

@end

