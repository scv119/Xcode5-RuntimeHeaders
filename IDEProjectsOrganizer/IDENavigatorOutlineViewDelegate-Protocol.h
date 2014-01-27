/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTOutlineViewDelegate-Protocol.h"

@protocol IDENavigatorOutlineViewDelegate <DVTOutlineViewDelegate>

@optional
- (struct _NSRange)outlineView:(id)arg1 initialSelectionRangeForCell:(id)arg2 proposedRange:(struct _NSRange)arg3;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2 hasUserFocus:(BOOL)arg3;
- (id)outlineView:(id)arg1 shouldCollapseTrayForItem:(id)arg2;
- (id)trayCellsForHeaderItem:(id)arg1;
- (id)outlineView:(id)arg1 childItemsForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupHeaderItem:(id)arg2;
@end
