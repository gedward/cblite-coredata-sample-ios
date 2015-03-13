//
//  RecipeType.h
//  Recipes
//
//  Created by Gerard Gonzalez on 3/13/15.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Recipe;

@interface RecipeType : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet *recipes;
@end

@interface RecipeType (CoreDataGeneratedAccessors)

- (void)addRecipesObject:(Recipe *)value;
- (void)removeRecipesObject:(Recipe *)value;
- (void)addRecipes:(NSSet *)values;
- (void)removeRecipes:(NSSet *)values;

@end
