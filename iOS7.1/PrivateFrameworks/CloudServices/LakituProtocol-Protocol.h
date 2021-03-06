//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol LakituProtocol <NSObject>
- (void)verifyCertificateWithInfo:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)listSMSTargetsWithInfo:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)changeSMSTargetWithInfo:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)startSMSChallengeWithInfo:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)deleteRecordWithInfo:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)updateRecordWithInfo:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)recoverRecordWithInfo:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)storeRecordWithInfo:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)getAccountInfoWithInfo:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
@end

