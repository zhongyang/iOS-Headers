//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicLibrary/ML3Predicate.h>

__attribute__((visibility("hidden")))
@interface ML3UnaryPredicate : ML3Predicate
{
    ML3Predicate *_predicate;
}

+ (id)predicateWithPredicate:(id)arg1;
@property(retain, nonatomic) ML3Predicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (id)databaseStatementParameters;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (id)predicateOptimizedForEntityClass:(Class)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1;

@end
