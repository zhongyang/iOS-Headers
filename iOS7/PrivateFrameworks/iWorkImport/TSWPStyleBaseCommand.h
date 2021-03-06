/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSKCommand.h>

@class TSSStyle<TSSPreset>, TSSTheme;

// Not exported
@interface TSWPStyleBaseCommand : TSKCommand
{
    TSSTheme *_theme;
    TSSStyle<TSSPreset> *_style;
}

@property(retain, nonatomic) TSSStyle<TSSPreset> *style; // @synthesize style=_style;
@property(retain, nonatomic) TSSTheme *theme; // @synthesize theme=_theme;
- (_Bool)process;
- (void)redo;
- (void)undo;
- (void)commit;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromMessage:(const struct StyleBaseCommandArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToMessage:(struct StyleBaseCommandArchive *)arg1 archiver:(id)arg2;
- (id)actionString;
- (void)dealloc;
- (id)initWithTheme:(id)arg1 style:(id)arg2;

@end

