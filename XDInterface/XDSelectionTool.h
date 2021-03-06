/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <XDInterface/XDDiagramTool.h>

@class XDGraphic;

@interface XDSelectionTool : XDDiagramTool
{
    XDGraphic *_mouseOverGraphic;
    struct CGRect _rubberbandRect;
}

+ (id)defaultIdentifier;
+ (void)initialize;
- (void)drawRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)mouseDown:(id)arg1 inView:(id)arg2;
- (BOOL)dragSelectedGraphicsWithEvent:(id)arg1 inView:(id)arg2;
- (void)rubberbandSelectionWithEvent:(id)arg1 inView:(id)arg2;
- (BOOL)moveSelectedGraphicsWithEvent:(id)arg1 inView:(id)arg2;
- (void)trackKnob:(int)arg1 ofGraphic:(id)arg2 withEvent:(id)arg3 inView:(id)arg4;
- (void)mouseMoved:(id)arg1 inView:(id)arg2;
- (void)_diagramStorageWillRemoveGraphic:(id)arg1;
- (void)resignCurrentDiagramTool;
- (void)becomeCurrentDiagramTool;
- (id)imageForDiagramToolbarItem;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end

