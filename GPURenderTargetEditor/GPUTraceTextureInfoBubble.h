/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GPURenderTargetEditor/GPUTraceResourceInfoBubble.h>

@class NSDictionary, NSTextField;

// Not exported
@interface GPUTraceTextureInfoBubble : GPUTraceResourceInfoBubble
{
    int _api;
    NSDictionary *_dict1;
    NSTextField *_nameLabel;
    NSTextField *_typeLabel;
    NSTextField *_sizeLabel;
    NSTextField *_internalFormatLabel;
    NSTextField *_immutableLabel;
    NSTextField *_minFilterLabel;
    NSTextField *_magFilterLabel;
    NSTextField *_mipFilterLabel;
    NSTextField *_wrapSLabel;
    NSTextField *_wrapTLabel;
    NSTextField *_maxAnisoLabel;
    NSTextField *_maxLevelLabel;
    NSTextField *_cropRectXyLabel;
    NSTextField *_cropRectWhLabel;
    NSTextField *_compareModeLabel;
    NSTextField *_compareFuncLabel;
    NSTextField *_immutableLevelsLabel;
    NSTextField *_baseLevelsLabel;
    NSTextField *_swizzleLabel;
    NSTextField *_minLODLabel;
    NSTextField *_maxLODLabel;
    NSTextField *_wrapRLabel;
}

- (void).cxx_destruct;
- (void)viewDidInstall;
- (id)initWithResource:(id)arg1 parentView:(id)arg2 owner:(id)arg3 infoDelegate:(id)arg4;

@end

