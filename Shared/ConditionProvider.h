//
//  ConditionProvider.h
//  EncounterTracker
//
//  Created by Paul Schifferer on 11/21/10.
//  Copyright 2010 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "Condition.h"


@class EncounterParticipant;

/**
 * An interface for condition providers.
 */
@protocol PRKConditionProvider <NSObject>

@required
/**
 * Get the number of conditions provided.
 * @return The number of conditions
 */
- (NSInteger)numberOfConditions;
/**
 * Get a list of the condition names provided.
 * @return An array of condition names
 */
- (NSArray*)conditionNames;
/**
 * Get a list of condition names for the participant.
 * TODO: more information
 * @param participant The participant
 * @return An array of condition names
 */
- (NSArray*)additionalConditionNamesForParticipant:(EncounterParticipant*)participant;
/**
 * Get the image name for the condition at the specified index.
 * @param index The index of the condition
 * @return The image name of the condition
 */
- (NSString*)conditionImageNameForIndex:(NSInteger)index;
/**
 * Get the image name for the condition of the specified name.
 * @param name The name of the condition
 * @return The image name of the condition
 */
- (NSString*)conditionImageNameForName:(NSString*)name;
/**
 * Get the image name of the "on" state for the condition at the specified index.
 * @param index The index of the condition
 * @return The image name of the condition
 */
- (NSString*)conditionOnImageNameForIndex:(NSInteger)index;
/**
 * Get the image name of the "on" state for the condition of the specified name.
 * @param name The name of the condition
 * @return The image name of the condition
 */
- (NSString*)conditionOnImageNameForName:(NSString*)name;
/**
 * Get the image name of the "off" state for the condition at the specified index.
 * @param index The index of the condition
 * @return The image name of the condition
 */
- (NSString*)conditionOffImageNameForIndex:(NSInteger)index;
/**
 * Get the image name of the "on" state for the condition of the specified name.
 * @param name The name of the condition
 * @return The image name of the condition
 */
- (NSString*)conditionOffImageNameForName:(NSString*)name;
/**
 * Get the name of the condition at the specified index.
 * @param index The index of the condition
 * @return The name of the condition
 */
- (NSString*)conditionNameForIndex:(NSInteger)index;
/**
 * Get the label of the condition for the specified name.
 * @param name The name of the condition
 * @return The label of the condition
 */
- (NSString*)conditionLabelForName:(NSString*)name;
/**
 * Get the label of the condition at the specified index.
 * @param index The index of the condition
 * @return The label of the condition
 */
- (NSString*)conditionLabelForIndex:(NSInteger)index;
/**
 * Get the type of the condition for the specified name.
 * @param name The name of the condition
 * @return The type of the condition
 */
- (ConditionType)conditionTypeForName:(NSString*)name;
/**
 * Get the type of the condition at the specified index.
 * @param index The index of the condition
 * @return The type of the condition
 */
- (ConditionType)conditionTypeForIndex:(NSInteger)index;
/**
 * Get the adjustment value of the condition for the specified name.
 * @param name The name of the condition
 * @return The adjustment value of the condition
 */
- (float)conditionAdjustmentForName:(NSString*)name;
/**
 * Get the adjustment value of the condition at the specified index.
 * @param index The index of the condition
 * @return The adjustment value of the condition
 */
- (float)conditionAdjustmentForIndex:(NSInteger)index;
/**
 * Get the description of the condition for the specified name.
 * @param name The name of the condition
 * @return The description of the condition
 */
- (NSString*)conditionDescriptionForName:(NSString*)name;
/**
 * Get the description of the condition at the specified index.
 * @param index The index of the condition
 * @return The description of the condition
 */
- (NSString*)conditionDescriptionForIndex:(NSInteger)index;
/**
 * Get the end type of the condition for the specified name.
 * @param name The name of the condition
 * @return The end type of the condition
 */
- (ConditionEnd)conditionEndForName:(NSString*)name;
/**
 * Get the end type of the condition at the specified index.
 * @param index The index of the condition
 * @return The end type of the condition
 */
- (ConditionEnd)conditionEndForIndex:(NSInteger)index;

@end
