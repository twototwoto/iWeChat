//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MyFavoritesDB;

@interface FavoritesCDNInfoDB : NSObject
{
    MyFavoritesDB *_mmDB;
}

- (void).cxx_destruct;
- (_Bool)deleteCdnInfoByFavoritesItemLocalIdIgnoringStatus:(unsigned int)arg1;
- (_Bool)deleteCdnInfoByFavoritesItemLocalId:(unsigned int)arg1;
- (id)getUploadCdnInfoByLocalItemDataId:(id)arg1 andType:(int)arg2;
- (_Bool)updateCdnInfo:(id)arg1;
- (_Bool)updateCdnInfoByExistCheckCDNItem:(id)arg1;
- (_Bool)updateCdnInfo:(id)arg1 MD5:(id)arg2 Head256Md5:(id)arg3 Type:(int)arg4;
- (id)getNextAsyncUploadCdnInfoByLocalItemId:(unsigned int)arg1;
- (id)getNextUploadCdnInfoByLocalItemId:(unsigned int)arg1;
- (_Bool)addCDNInfo:(id)arg1;
- (void)initDB:(id)arg1;
- (id)init;

@end
