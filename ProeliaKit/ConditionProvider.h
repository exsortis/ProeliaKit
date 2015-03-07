//
//  ConditionProvider.h
//  EncounterTracker
//
//  Created by Paul Schifferer on 11/21/10.
//  Copyright 2010 Pilgrimage Software. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@protocol PRConditionProvider <NSObject>

@required
- (NSInteger)numberOfConditions;
- (NSArray*)conditionNames;
- (NSArray*)additionalConditionNamesForParticipant:(id)activeParticipant;
- (NSString*)conditionImageNameForIndex:(NSInteger)index;
- (NSString*)conditionImageNameForName:(NSString*)name;
- (NSString*)conditionOnImageNameForIndex:(NSInteger)index;
- (NSString*)conditionOnImageNameForName:(NSString*)name;
- (NSString*)conditionOffImageNameForIndex:(NSInteger)index;
- (NSString*)conditionOffImageNameForName:(NSString*)name;
- (NSString*)conditionNameForIndex:(NSInteger)index;
- (NSString*)conditionLabelForName:(NSString*)name;
- (NSString*)conditionLabelForIndex:(NSInteger)index;
- (NSInteger)conditionTypeForName:(NSString*)name;
- (NSInteger)conditionTypeForIndex:(NSInteger)index;
- (CGFloat)conditionAdjustmentForName:(NSString*)name;
- (CGFloat)conditionAdjustmentForIndex:(NSInteger)index;
- (NSString*)conditionDescriptionForName:(NSString*)name;
- (NSString*)conditionDescriptionForIndex:(NSInteger)index;
- (NSInteger)conditionEndForName:(NSString*)name;
- (NSInteger)conditionEndForIndex:(NSInteger)index;

@end
