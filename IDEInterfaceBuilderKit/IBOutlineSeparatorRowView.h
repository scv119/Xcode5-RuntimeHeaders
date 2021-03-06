/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTableRowView.h"

@class CALayer;

@interface IBOutlineSeparatorRowView : NSTableRowView
{
    CALayer *_bottomLineLayer;
    CALayer *_topLineLayer;
    BOOL _showTopLine;
    BOOL _showBottomLine;
    double _leadingInset;
}

@property(nonatomic) double leadingInset; // @synthesize leadingInset=_leadingInset;
@property(nonatomic) BOOL showBottomLine; // @synthesize showBottomLine=_showBottomLine;
@property(nonatomic) BOOL showTopLine; // @synthesize showTopLine=_showTopLine;
- (void).cxx_destruct;
- (id)makeBackingLayer;
- (void)_updateLineLayerVisibilityAndFrames;

@end

