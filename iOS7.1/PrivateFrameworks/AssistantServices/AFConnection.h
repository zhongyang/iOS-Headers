//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, NSXPCConnection;

@interface AFConnection : NSObject
{
    NSXPCConnection *_connection;
    NSString *_outstandingRequestClass;
    BOOL _hasActiveRequest;
    NSMutableDictionary *_replyHandlerForAceId;
    unsigned int _stateInSync:1;
    unsigned int _shouldSpeak:1;
    unsigned int _isCapturingSpeech:1;
    unsigned int _hasOutstandingRequest:1;
    unsigned int _audioSessionID;
    float _averagePower;
    float _peakPower;
    unsigned int _clientStateIsInSync:1;
    unsigned int _voiceOverIsActive:1;
    id <AFAssistantUIService> _delegate;
    id <AFSpeechDelegate> _speechDelegate;
}

+ (void)defrost;
+ (id)outputVoice;
+ (BOOL)isReadyForLanguageCode:(id)arg1;
+ (id)currentLanguageCode;
+ (BOOL)userDataSyncNeeded;
+ (void)stopMonitoringAvailability;
+ (BOOL)isAvailable;
+ (void)beginMonitoringAvailability;
+ (BOOL)assistantIsSupported;
+ (BOOL)assistantIsSupportedForLanguageCode:(id)arg1 error:(id *)arg2;
+ (void)initialize;
@property(nonatomic) __weak id <AFSpeechDelegate> speechDelegate; // @synthesize speechDelegate=_speechDelegate;
@property(nonatomic) __weak id <AFAssistantUIService> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)usefulUserResultWillPresent;
- (void)telephonyRequestCompleted;
- (void)prepareForPhoneCall;
- (void)setAlertContextWithBulletins:(id)arg1;
- (void)setOverriddenApplicationContext:(id)arg1 includeSmsInContext:(id)arg2;
- (void)setApplicationContext;
- (void)clearContext;
- (void)sendReplyCommand:(id)arg1;
- (void)sendGenericAceCommand:(id)arg1 conflictHandler:(CDUnknownBlockType)arg2;
- (void)sendGenericAceCommand:(id)arg1;
- (float)peakPower;
- (float)averagePower;
- (unsigned int)audioSessionID;
- (BOOL)shouldSpeak;
@property(readonly, nonatomic) BOOL isRecording;
- (void)startRequestWithCorrectedText:(id)arg1 forSpeechIdentifier:(id)arg2;
- (void)rollbackRequest;
- (void)rollbackClearContext;
- (void)stopSpeech;
- (void)stopSpeechWithOptions:(id)arg1;
- (void)updateSpeechOptions:(id)arg1;
- (void)cancelSpeech;
- (void)startSpeechPronunciationRequestWithOptions:(id)arg1 pronunciationContext:(id)arg2;
- (void)startSpeechRequestWithOptions:(id)arg1;
- (void)startDirectActionRequestWithString:(id)arg1;
- (void)startRequestWithText:(id)arg1;
- (void)setVoiceOverIsActive:(BOOL)arg1;
- (void)setIsStark:(BOOL)arg1;
- (void)setLockState:(BOOL)arg1 screenLocked:(BOOL)arg2;
- (void)forceAudioSessionActive;
- (void)preheat;
- (void)endSession;
- (void)_willCompleteRequest;
- (void)_willFailRequestWithError:(id)arg1;
- (void)_willCancelRequest;
- (void)_willStartRequestForSpeech:(BOOL)arg1;
- (void)_updateClientState;
- (void)_updateState;
- (void)_extendRequestTimeout;
- (void)_cancelRequestTimeout;
- (void)_invokeRequestTimeout;
- (void)_scheduleRequestTimeout;
- (id)_connection;
- (void)_clearConnection;
- (void)_connectionInterrupted;
- (void)_tellSpeechDelegateRecognitionDidFail:(id)arg1;
- (void)_tellSpeechDelegateSpeechRecognized:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidFail:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidCancel;
- (void)_tellSpeechDelegateRecordingDidEnd;
- (void)_tellSpeechDelegateRecordingDidBeginOnAVRecordRoute:(id)arg1;
- (void)_tellSpeechDelegateRecordingWillBegin;
- (void)_tellDelegateAudioSessionIDChanged:(unsigned int)arg1;
- (void)_tellDelegateShouldSpeakChanged:(BOOL)arg1;
- (void)_tellDelegateRequestFailed:(id)arg1 requestClass:(id)arg2;
- (void)_tellDelegateRequestFinished;
- (void)_tellDelegateRequestWillStart;
- (void)_speechRecordingDidUpdateAveragePower:(float)arg1 peakPower:(float)arg2;
- (void)_setAudioSessionID:(unsigned int)arg1;
- (void)_setShouldSpeak:(BOOL)arg1;
- (void)_doCommand:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_requestDidEnd;
- (void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(BOOL)arg2 isBackgroundRequest:(BOOL)arg3;
- (void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(BOOL)arg2;
- (void)_checkAndSetIsCapturingSpeech:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (void)cancelRequest;
- (void)startSpeechRequestWithSpeechFileAtURL:(id)arg1 isNarrowBand:(BOOL)arg2;
- (void)startSpeechRequestWithSpeechFileAtURL:(id)arg1;
- (id)_clientServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_clientService;
- (void)_clearAssistantInfoForAccountWithIdentifier:(id)arg1;
- (void)_barrier;

@end

