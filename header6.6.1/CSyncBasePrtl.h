//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PrtlBase.h"

@class NSString;

@interface CSyncBasePrtl : PrtlBase
{
    NSString *m_nsDocPath;
}

@property(retain, nonatomic) NSString *m_nsDocPath; // @synthesize m_nsDocPath;
- (void).cxx_destruct;
- (void)HandleModUsrImg:(struct tagMMModUserImg *)arg1;
- (id)HandleMemContactDetail:(id)arg1 isSimplify:(_Bool)arg2;
- (void)HandleModContact:(id)arg1 Cmd:(unsigned int)arg2;
- (void)ParseCmd:(unsigned int)arg1 Buff:(char *)arg2 Len:(unsigned int)arg3;

@end
