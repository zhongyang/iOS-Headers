/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SQLitePredicate.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SQLiteCompoundPredicate : SQLitePredicate <NSCopying>
{
    BOOL _unary;
    BOOL _trueIfNoPredicates;
    NSString *_combinationOperation;
    NSArray *_predicates;
}

+ (id)predicateWithProperty:(id)arg1 notEqualToValues:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 equalToValues:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 values:(id)arg2 comparisonType:(int)arg3;
+ (id)negatedPredicate:(id)arg1;
+ (id)predicateMatchingAnyPredicates:(id)arg1;
+ (id)predicateMatchingAllPredicates:(id)arg1;
@property(readonly, nonatomic) NSArray *predicates; // @synthesize predicates=_predicates;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (id)SQLForEntityClass:(Class)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

