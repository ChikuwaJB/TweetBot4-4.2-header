/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, PTHTweetbotAccount, NSMutableDictionary, NSArray;

@interface PTHTweetbotAccountSettings : NSObject <NSCoding> {

	NSMutableArray* _oldStatusFilters;
	Class _syncClass;
	BOOL _showMarker;
	BOOL _mobilizerEnabled;
	int _geoType;
	PTHTweetbotAccount* _account;
	Class _urlShortnerClass;
	Class _bookmarkerClass;
	Class _imageUploaderClass;
	Class _movieUploaderClass;
	Class _mobilizerClass;
	long long _lastSelectedListTID;
	NSMutableDictionary* _dictionary;

}

@property (assign,nonatomic,__weak) PTHTweetbotAccount * account;                                    //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) int geoType;                                                            //@synthesize geoType=_geoType - In the implementation block
@property (assign,setter=setURLShortnerClass:,nonatomic,__weak) Class urlShortnerClass;              //@synthesize urlShortnerClass=_urlShortnerClass - In the implementation block
@property (assign,nonatomic,__weak) Class bookmarkerClass;                                           //@synthesize bookmarkerClass=_bookmarkerClass - In the implementation block
@property (assign,nonatomic,__weak) Class imageUploaderClass;                                        //@synthesize imageUploaderClass=_imageUploaderClass - In the implementation block
@property (assign,nonatomic,__weak) Class movieUploaderClass;                                        //@synthesize movieUploaderClass=_movieUploaderClass - In the implementation block
@property (assign,nonatomic,__weak) Class mobilizerClass;                                            //@synthesize mobilizerClass=_mobilizerClass - In the implementation block
@property (assign,nonatomic) BOOL showMarker;                                                        //@synthesize showMarker=_showMarker - In the implementation block
@property (assign,getter=isMobilizerEnabled,nonatomic) BOOL mobilizerEnabled;                        //@synthesize mobilizerEnabled=_mobilizerEnabled - In the implementation block
@property (assign,nonatomic) long long lastSelectedListTID;                                          //@synthesize lastSelectedListTID=_lastSelectedListTID - In the implementation block
@property (nonatomic,readonly) NSArray * oldStatusFilters;                                           //@synthesize oldStatusFilters=_oldStatusFilters - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dictionary;                                       //@synthesize dictionary=_dictionary - In the implementation block
-(long long)lastSelectedListTID;
-(void)setLastSelectedListTID:(long long)arg1 ;
-(Class)urlShortnerClass;
-(Class)imageUploaderClass;
-(Class)movieUploaderClass;
-(Class)bookmarkerClass;
-(Class)mobilizerClass;
-(NSArray *)oldStatusFilters;
-(void)setURLShortnerServiceClass:(Class)arg1 ;
-(void)setBookmarkerClass:(Class)arg1 ;
-(void)setImageUploaderClass:(Class)arg1 ;
-(void)setMovieUploaderClass:(Class)arg1 ;
-(void)setMobilizerClass:(Class)arg1 ;
-(void)setURLShortnerClass:(Class)arg1 ;
-(BOOL)isMobilizerEnabled;
-(void)setMobilizerEnabled:(BOOL)arg1 ;
-(void)_setup;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSMutableDictionary *)dictionary;
-(void)setGeoType:(int)arg1 ;
-(int)geoType;
-(BOOL)showMarker;
-(void)setShowMarker:(BOOL)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(void)setAccount:(PTHTweetbotAccount *)arg1 ;
-(PTHTweetbotAccount *)account;
@end
