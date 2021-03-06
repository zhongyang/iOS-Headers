//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDate, NSTimeZone, UIColor, UIFont, UILabel;

@interface MTDateLabel : UIView
{
    NSTimeZone *_timeZone;
    BOOL _hideTimeDesignator;
    NSDate *_date;
    UILabel *_dateLabel;
    UILabel *_timeDesignatorLabel;
    float _paddingFromTimeToDesignator;
    int _timeDesignatorBaselineAdjustment;
    id <MTDateLabelObserver> _observer;
}

@property(nonatomic) id <MTDateLabelObserver> observer; // @synthesize observer=_observer;
@property(nonatomic) int timeDesignatorBaselineAdjustment; // @synthesize timeDesignatorBaselineAdjustment=_timeDesignatorBaselineAdjustment;
@property(nonatomic) float paddingFromTimeToDesignator; // @synthesize paddingFromTimeToDesignator=_paddingFromTimeToDesignator;
@property(nonatomic) BOOL hideTimeDesignator; // @synthesize hideTimeDesignator=_hideTimeDesignator;
@property(readonly, nonatomic) UILabel *timeDesignatorLabel; // @synthesize timeDesignatorLabel=_timeDesignatorLabel;
@property(readonly, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (void)layoutSubviews;
- (id)viewForBaselineLayout;
- (struct CGSize)intrinsicContentSize;
- (void)_noteLayoutChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) BOOL hasTimeDesignator;
@property(retain, nonatomic) UIFont *timeDesignatorFont;
@property(retain, nonatomic) UIFont *font;
@property(retain, nonatomic) UIColor *textColor;
- (void)_updateDateString;
@property(retain, nonatomic) NSTimeZone *timeZone;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

