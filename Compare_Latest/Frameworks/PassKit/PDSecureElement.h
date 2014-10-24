//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSLock, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, PDContactlessInterface, PKPaymentApplication;

@interface PDSecureElement : NSObject <NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSString *_secureElementIdentifier;
    NSLock *_activatedPaymentApplicationLock;
    NSLock *_authorizedPaymentApplicationLock;
    PKPaymentApplication *_activatedPaymentApplication;
    PKPaymentApplication *_authorizedPaymentApplication;
    NSObject<OS_dispatch_semaphore> *_authRandomMutex;
    BOOL _needsAuthRandom;
    BOOL _isAvailable;
    PDContactlessInterface *_contactlessInterface;
    id <PDSecureElementDelegate> _delegate;
}

+ (BOOL)supportsSecureCoding;
+ (id)archive;
+ (id)sharedInstance;
@property(nonatomic) id <PDSecureElementDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) PDContactlessInterface *contactlessInterface; // @synthesize contactlessInterface=_contactlessInterface;
@property(readonly, nonatomic) BOOL isAvailable; // @synthesize isAvailable=_isAvailable;
- (void)_archiveToDisk;
- (id)_secureElementCardsWithAIDs:(id)arg1;
- (void)_processingQueueDeauthorizePaymentApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processingQueueAuthorizePaymentApplication:(id)arg1 withAuthenticationCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_processingQueueActivatePaymentApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setAuthorizedPaymentApplication:(id)arg1;
- (void)_setActivatedPaymentApplication:(id)arg1;
- (id)secureElementCards;
- (BOOL)syncWithTSM;
@property(readonly, nonatomic) PKPaymentApplication *authorizedPaymentApplication;
@property(readonly, nonatomic) PKPaymentApplication *activatedPaymentApplication;
@property(readonly, nonatomic) NSString *secureElementIdentifier;
@property(readonly, nonatomic) BOOL isInRestrictedMode;
- (void)setupNewUserWithCompletion:(CDUnknownBlockType)arg1;
- (void)markAllPaymentApplicationsForDelete;
- (void)setAuthRandomIfNecessary;
- (void)markPaymentApplicationsWithIdentifiersForDelete:(id)arg1;
- (void)markPaymentApplicationForDelete:(id)arg1;
- (void)casdCertificatesWithCompletion:(CDUnknownBlockType)arg1;
- (void)encodeAndSignDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)inAppPaymentDataWithPaymentAuthorizationRequest:(id)arg1 paymentApplication:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deauthorizePaymentApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)authorizePaymentApplication:(id)arg1 withAuthenticationCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)activatePaymentApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end
