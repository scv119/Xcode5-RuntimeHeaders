/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <HexFiend/HFRepresenter.h>

@class NSScroller;

@interface HFVerticalScrollerRepresenter : HFRepresenter
{
    NSScroller *_scroller;
}

+ (struct CGPoint)defaultLayoutPosition;
- (void)controllerDidChange:(unsigned long long)arg1;
- (double)minimumViewWidthForBytesPerLine:(unsigned long long)arg1;
- (void)updateScrollerValue;
- (void)scrollerDidChangeValue:(id)arg1;
- (void)scrollByLines:(long long)arg1;
- (void)scrollByKnobToValue:(double)arg1;
- (unsigned long long)visibleLines;
- (void)accomodateGrowBox;
- (id)createView;

@end

