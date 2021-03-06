//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SQLiteEntity.h"

@interface Pass : SQLiteEntity
{
}

+ (id)_propertySettersForGroupingProfile;
+ (id)_propertySettersForUpdateContext;
+ (id)_propertySettersForDisplayProfile;
+ (id)_propertySettersForPass;
+ (id)_propertiesForPass;
+ (id)_realPassInDatabase:(id)arg1 withProperties:(id)arg2 values:(id *)arg3 pID:(long long)arg4;
+ (id)_predicateForSerialNumber:(id)arg1;
+ (id)predicateForUniqueID:(id)arg1;
+ (id)predicateForValidStyle;
+ (id)predicateForGroup:(id)arg1;
+ (id)predicateForPassType:(id)arg1;
+ (id)predicateForPrimaryAccountIdentifier:(id)arg1;
+ (id)predicateForPaymentApplicationIdentifier:(id)arg1;
+ (id)predicateForPaymentApplicationNetworks:(id)arg1;
+ (id)predicateForPaymentApplicationSupportInAppPayment:(BOOL)arg1;
+ (id)predicateForPaymentApplicationState:(int)arg1;
+ (id)predicateForPaymentApplicationSecureElementIdentifier:(id)arg1;
+ (id)predicateForNotificationService:(id)arg1;
+ (id)predicateForWebService:(id)arg1;
+ (id)predicateForHasAnyWebService;
+ (id)queryWithDatabase:(id)arg1 group:(id)arg2;
+ (id)queryWithDatabase:(id)arg1 passType:(id)arg2;
+ (id)anyInDatabase:(id)arg1 withPrimaryAccountIdentifier:(id)arg2;
+ (id)anyInDatabase:(id)arg1 withApplicationIdentifier:(id)arg2;
+ (id)anyInDatabase:(id)arg1 withNotificationService:(id)arg2;
+ (id)anyInDatabase:(id)arg1 withWebService:(id)arg2 serialNumber:(id)arg3;
+ (id)anyInDatabase:(id)arg1 withPassType:(id)arg2 serialNumber:(id)arg3;
+ (id)anyInDatabase:(id)arg1 withGroup:(id)arg2;
+ (id)anyInDatabase:(id)arg1 withWebService:(id)arg2;
+ (id)anyInDatabase:(id)arg1 withPassType:(id)arg2;
+ (id)anyInDatabase:(id)arg1 withUniqueID:(id)arg2;
+ (void)enumeratePassesAndGroupingProfilesForQuery:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
+ (void)enumerateOrganizationNamesForQuery:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
+ (void)enumerateUpdateContextsForQuery:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
+ (id)passesInDatabase:(id)arg1 matchingPredicate:(id)arg2;
+ (id)_realPassesInDatabase:(id)arg1 predicate:(id)arg2 orderedBy:(id)arg3;
+ (id)insertPass:(id)arg1 withPassType:(id)arg2 webService:(id)arg3 transactionService:(id)arg4 messageService:(id)arg5 inDatabase:(id)arg6;
+ (id)_updateDictionaryWithPass:(id)arg1;
+ (id)_insertionDictionaryWithPass:(id)arg1 passType:(id)arg2;
+ (id)joinClauseForProperty:(id)arg1;
+ (id)associationPropertyForEntityClass:(Class)arg1;
+ (id)databaseTable;
- (BOOL)deleteFromDatabase;
- (void)getPushRegistrationStatus:(int *)arg1 date:(id *)arg2;
- (id)relevantDate;
- (id)authenticationToken;
- (id)serialNumber;
- (id)uniqueID;
- (BOOL)revoked;
- (id)group;
- (id)passNotificationServiceForType:(int)arg1;
- (id)passMessageService;
- (id)passTransactionService;
- (id)messageService;
- (id)transactionService;
- (id)webService;
- (id)passType;
- (id)groupingProfile;
- (id)updateContext;
- (id)remotePass;
- (id)localPass;
- (id)_realPass;
- (void)updateWithRevocationStatus:(BOOL)arg1;
- (void)updateWithIntraGroupOrder:(unsigned int)arg1;
- (void)updateWithGroup:(id)arg1;
- (void)updateWithAssociatedApplicationIdentifiers:(id)arg1;
- (void)_updateWithPassMessageService:(id)arg1;
- (void)_updateWithPassTransactionService:(id)arg1;
- (void)_updateWithMessageService:(id)arg1;
- (void)_updateWithTransactionService:(id)arg1;
- (void)updateWithPaymentApplications:(id)arg1;
- (void)_updateWithWebService:(id)arg1;
- (void)updateWithBeacons:(id)arg1;
- (void)updateTallCodeValueWithPass:(id)arg1;
- (void)updateBackgroundColorWithPass:(id)arg1;
- (void)updateLocationsWithPass:(id)arg1;
- (void)updateWithLastModifiedSource:(int)arg1;
- (void)updateWithLastModifiedTag:(id)arg1;
- (void)updateWithPushRegistrationStatus:(int)arg1 date:(id)arg2;
- (void)updateWithPass:(id)arg1 webService:(id)arg2 transactionSevice:(id)arg3 messageService:(id)arg4;
- (id)initWithPass:(id)arg1 passType:(id)arg2 webService:(id)arg3 transactionService:(id)arg4 messageService:(id)arg5 inDatabase:(id)arg6;

@end

