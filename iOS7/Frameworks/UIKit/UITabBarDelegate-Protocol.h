/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol UITabBarDelegate <NSObject>

@optional
- (void)tabBar:(id)arg1 didEndCustomizingItems:(id)arg2 changed:(_Bool)arg3;
- (void)tabBar:(id)arg1 willEndCustomizingItems:(id)arg2 changed:(_Bool)arg3;
- (void)tabBar:(id)arg1 didBeginCustomizingItems:(id)arg2;
- (void)tabBar:(id)arg1 willBeginCustomizingItems:(id)arg2;
- (void)tabBar:(id)arg1 didSelectItem:(id)arg2;
@end

