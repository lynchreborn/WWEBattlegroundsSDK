#include "WWECharacter.h"
#include "Components/SkeletalMeshComponent.h"

AWWECharacter::AWWECharacter() {
    this->bDoingCapturesPhotomaton = false;
    this->HeadMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HeadMesh"));
    this->HairMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HairMesh"));
    this->SkinTextureDiffuse = NULL;
    this->SkinTextureDiffuse_RT = NULL;
    this->SkinTextureSAR_RT = NULL;
    this->SkinTextureNormals_RT = NULL;
    this->bCharacterIsLoaded = false;
    this->CurrentCharacterHeight = 0.00f;
    this->_CachedMainSkeletalMeshComp = NULL;
    this->_CachedHeadSkeletalMeshComp = NULL;
    this->_CachedHairSkeletalMeshComp = NULL;
}

