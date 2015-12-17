/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, CLLocation;

@interface PTHTweetbotBoundingBox : NSObject <NSCoding> {

	long long _type;
	NSArray* _locations;

}

@property (assign,nonatomic) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSArray * locations;                            //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PT4 coordinateRegion; 
@property (nonatomic,__weak,readonly) CLLocation * location; 
+(id)newBoundingBoxFromDictionary:(id)arg1 ;
-(SCD_Struct_PT4)coordinateRegion;
-(id)initWithType:(long long)arg1 dictionary:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocations:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(CLLocation *)location;
-(id)initWithLocation:(id)arg1 ;
-(NSArray *)locations;
-(BOOL)containsLocation:(id)arg1 ;
@end

