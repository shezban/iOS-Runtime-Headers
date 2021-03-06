/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSDMovieHUDViewController>, CALayer, KNBuildRenderer, NSObject<NSCopying>, TSKAVPlayerController;

@interface KNMovieRenderer : KNBuildRenderer <TSKAVPlayerControllerDelegate> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    unsigned int mHasMoviePlaybackStarted : 1;
    unsigned int mNeedsToSendMovieStartCallback : 1;
    unsigned int mNeedsToSendBuildEndCallback : 1;
    unsigned int mIsObservingVideoLayerReadyForDisplay : 1;
    unsigned int mNeedsPlaybackAtStartTime : 1;
    unsigned int mHasPendingTogglePlayingControl : 1;
    unsigned int mPendingTogglePlayingControlStartsPlaying : 1;
    unsigned int mShouldMoviePlaybackEndOnCompletion : 1;
    unsigned int mWasMoviePlayingBeforeAnimationPause : 1;
    KNBuildRenderer *mBuildInRenderer;
    } mFrameInContainerView;
    SEL mMovieStartCallbackSelector;
    id mMovieStartCallbackTarget;
    double mPlaybackAtStartTimePauseOffset;
    double mPlaybackAtStartTimePauseTime;
    TSKAVPlayerController *mPlayerController;
    double mStartTime;
    CALayer *mVideoLayer;
    <TSDMovieHUDViewController> *mViewController;
}

@property KNBuildRenderer * buildInRenderer;
@property(readonly) BOOL hasMoviePlaybackStarted;
@property(readonly) NSObject<NSCopying> * movieTimelineMovieIdentifier;
@property(readonly) CALayer * offscreenVideoLayer;
@property(readonly) TSKAVPlayerController * playerController;
@property(retain) <TSDMovieHUDViewController> * viewController;

+ (id)movieInfoForMovieTimelineMovieIdentifier:(id)arg1;
+ (id)movieTimelineMovieIdentifierForMovieInfo:(id)arg1;
+ (id)textureContextWithSession:(id)arg1;

- (BOOL)addAnimationsAtLayerTime:(double)arg1;
- (void)animateAfterDelay:(double)arg1;
- (void)applyMovieControl:(int)arg1;
- (id)buildInRenderer;
- (void)dealloc;
- (void)forceRemoveAnimations;
- (BOOL)hasMoviePlaybackStarted;
- (id)initWithInfo:(id)arg1 build:(id)arg2 stageIndex:(int)arg3 session:(id)arg4 model:(id)arg5 animatedSlideView:(id)arg6;
- (void)interruptAndReset;
- (id)movieTimelineMovieIdentifier;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)offscreenVideoLayer;
- (void)p_applyActionEffect:(id)arg1;
- (void)p_cancelPlaybackAtStartTime;
- (struct CGImage { }*)p_copyCurrentVideoFrameImage;
- (void)p_didEndMoviePlayback;
- (void)p_didStartMoviePlayback;
- (void)p_playbackDidFailWithError:(id)arg1;
- (void)p_schedulePlaybackAtStartTime;
- (void)p_setupPlayerController;
- (void)p_setupReflectionAndMaskingOnMovieTexture:(id)arg1 strokeTexture:(id)arg2 reflectionTexture:(id)arg3;
- (void)p_setupVideoLayer;
- (void)p_showVideoLayer;
- (void)p_startMoviePlaybackIfNeeded;
- (void)p_startPlaybackAtStartTime;
- (void)p_teardownUpdatingTexture:(BOOL)arg1;
- (void)p_unschedulePlaybackAtStartTime;
- (void)pauseAnimations;
- (void)pauseAnimationsAtTime:(double)arg1;
- (void)playbackDidStopForPlayerController:(id)arg1;
- (void)playerController:(id)arg1 playbackDidFailWithError:(id)arg2;
- (id)playerController;
- (void)registerForMovieStartCallback:(SEL)arg1 target:(id)arg2;
- (void)removeAnimationsAndFinish:(BOOL)arg1;
- (void)resumeAnimationsIfPaused;
- (void)resumeAnimationsIfPausedAtTime:(double)arg1;
- (void)setBuildInRenderer:(id)arg1;
- (void)setFrameOnViewLayer:(id)arg1;
- (void)setViewController:(id)arg1;
- (void)stopAnimations;
- (void)updateAnimationsForLayerTime:(double)arg1;
- (void)updateHUD;
- (id)viewController;

@end
