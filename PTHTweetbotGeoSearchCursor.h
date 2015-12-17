/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotCursor.h>

@class CLLocation, PTHTweetbotPlace;

@interface PTHTweetbotGeoSearchCursor : PTHTweetbotCursor {

	int _granularity;
	unsigned long long _maxResults;
	CLLocation* _location;

}

@property (assign,nonatomic) int granularity;                                       //@synthesize granularity=_granularity - In the implementation block
@property (assign,nonatomic) unsigned long long maxResults;                         //@synthesize maxResults=_maxResults - In the implementation block
@property (nonatomic,readonly) CLLocation * location;                               //@synthesize location=_location - In the implementation block
@property (nonatomic,__weak,readonly) PTHTweetbotPlace * closestPlace; 
+(Class)itemClass;
-(id)initWithAccount:(id)arg1 location:(id)arg2 ;
-(id)requestURLString;
-(id)itemsArrayFromResponse:(id)arg1 ;
-(PTHTweetbotPlace *)closestPlace;
-(id)queryDictionary;
-(int)granularity;
-(CLLocation *)location;
-(void)setGranularity:(int)arg1 ;
-(id)uniqueID;
-(void)setMaxResults:(unsigned long long)arg1 ;
-(unsigned long long)maxResults;
@end

