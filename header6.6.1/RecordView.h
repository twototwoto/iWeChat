//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface RecordView : UIView
{
    UIView *_recordLeftView;
    UIImageView *_recordImageView;
    UIImageView *_recordSignalView;
    UIButton *_recordGarbageView;
    UIImageView *_recordWarningView;
    UIImageView *_recordBkgView;
    UILabel *_timeoutCountingLabel;
    UILabel *_warningMessageLabel;
    UIActivityIndicatorView *_indicatorView;
    _Bool _bPreparing;
    _Bool _bTimeOutCounting;
}

@property(retain, nonatomic) UILabel *timeoutCountingLabel; // @synthesize timeoutCountingLabel=_timeoutCountingLabel;
@property(nonatomic) _Bool bPreparing; // @synthesize bPreparing=_bPreparing;
@property(retain, nonatomic) UIImageView *recordBkgView; // @synthesize recordBkgView=_recordBkgView;
@property(retain, nonatomic) UILabel *warningMessageLabel; // @synthesize warningMessageLabel=_warningMessageLabel;
@property(retain, nonatomic) UIImageView *recordWarningView; // @synthesize recordWarningView=_recordWarningView;
@property(retain, nonatomic) UIButton *recordGarbageView; // @synthesize recordGarbageView=_recordGarbageView;
@property(retain, nonatomic) UIImageView *recordSignalView; // @synthesize recordSignalView=_recordSignalView;
@property(retain, nonatomic) UIImageView *recordImageView; // @synthesize recordImageView=_recordImageView;
- (void).cxx_destruct;
- (void)SetPeakPower:(float)arg1;
- (_Bool)isRecordBkgShow;
- (void)ShowRecordingTimeoutCount:(long long)arg1 isShow:(_Bool)arg2;
- (void)HideRecordAnimated:(_Bool)arg1;
- (void)StartTooLongTipsAnimated:(_Bool)arg1;
- (void)StartTooShortTipsAnimated:(_Bool)arg1;
- (void)StartRecordCancelAnimated:(_Bool)arg1;
- (void)StartRecordAnimated:(_Bool)arg1;
- (void)ShowPreparing:(_Bool)arg1;
- (void)reset;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

