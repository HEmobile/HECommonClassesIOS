//
//  NSManagedObject+LocalAccessors.h
//  BandTemplate
//
//  Created by Roberto Silva on 25/07/13.
//  Copyright (c) 2013 Felloway. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface NSManagedObject (LocalAccessors)

+ (NSManagedObjectContext *)sharedManagedObjectContext;
+ (void)saveContext;

+ (NSString *)entityName;//NSStringFromClass([self class])

+ (id)createInstance;

+ (BOOL)importFromDictionary:(NSDictionary *)dictionary;
+ (NSUInteger)importAllFromArray:(NSArray *)listOfDictionaries;

+ (NSArray *)fetchAllWithPredicate:(NSPredicate *)predicate andSortDescriptor:(NSSortDescriptor *)sortDescriptor;
+ (NSArray *)fetchAllWithPredicate:(NSPredicate *)predicate;
+ (NSArray *)fetchAllWithSortDescriptor:(NSSortDescriptor *)sortDescriptor;

- (void)setAttribute:(NSString *)attributeName withObject:(id)object;
@end
