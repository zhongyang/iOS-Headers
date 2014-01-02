/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebKit/WebHTMLView.h>

@interface WebHTMLView (WebNSTextInputSupport)
- (void)_updateSelectionForInputManager;
- (void)insertText:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (void)markedTextUpdate:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)unmarkText;
- (_Bool)hasMarkedText;
- (long long)conversationIdentifier;
- (struct _NSRange)markedRange;
- (struct _NSRange)selectedRange;
- (struct CGRect)firstRectForCharacterRange:(struct _NSRange)arg1;
- (unsigned long long)characterIndexForPoint:(struct CGPoint)arg1;
@end
