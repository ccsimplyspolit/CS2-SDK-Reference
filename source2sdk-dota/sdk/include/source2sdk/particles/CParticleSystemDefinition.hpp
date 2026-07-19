#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/IParticleSystemDefinition.hpp"
#include "source2sdk/particles/InheritableBoolType_t.hpp"
#include "source2sdk/particles/ParticleChildrenInfo_t.hpp"
#include "source2sdk/particles/ParticleControlPointConfiguration_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSnapshot.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
namespace source2sdk
{
    namespace particles
    {
        struct CParticleFunctionConstraint;
    };
};
namespace source2sdk
{
    namespace particles
    {
        struct CParticleFunctionEmitter;
    };
};
namespace source2sdk
{
    namespace particles
    {
        struct CParticleFunctionForce;
    };
};
namespace source2sdk
{
    namespace particles
    {
        struct CParticleFunctionInitializer;
    };
};
namespace source2sdk
{
    namespace particles
    {
        struct CParticleFunctionOperator;
    };
};
namespace source2sdk
{
    namespace particles
    {
        struct CParticleFunctionPreEmission;
    };
};
namespace source2sdk
{
    namespace particles
    {
        struct CParticleFunctionRenderer;
    };
};
namespace source2sdk
{
    namespace particleslib
    {
        struct ParticleNamedValueSource_t;
    };
};

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x440
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CParticleSystemDefinition : public source2sdk::particles::IParticleSystemDefinition
        {
        public:
            // metadata: MPropertyFriendlyName "version"
            // metadata: MPropertySuppressField
            std::int32_t m_nBehaviorVersion; // 0x8            
            uint8_t _pad000c[0x4]; // 0xc
            // metadata: MPropertySuppressField
            // m_PreEmissionOperators has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::particles::CParticleFunctionPreEmission*> m_PreEmissionOperators;
            char m_PreEmissionOperators[0x18]; // 0x10            
            // metadata: MPropertySuppressField
            // m_Emitters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::particles::CParticleFunctionEmitter*> m_Emitters;
            char m_Emitters[0x18]; // 0x28            
            // metadata: MPropertySuppressField
            // m_Initializers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::particles::CParticleFunctionInitializer*> m_Initializers;
            char m_Initializers[0x18]; // 0x40            
            // metadata: MPropertySuppressField
            // m_Operators has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::particles::CParticleFunctionOperator*> m_Operators;
            char m_Operators[0x18]; // 0x58            
            // metadata: MPropertySuppressField
            // m_ForceGenerators has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::particles::CParticleFunctionForce*> m_ForceGenerators;
            char m_ForceGenerators[0x18]; // 0x70            
            // metadata: MPropertySuppressField
            // m_Constraints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::particles::CParticleFunctionConstraint*> m_Constraints;
            char m_Constraints[0x18]; // 0x88            
            // metadata: MPropertySuppressField
            // m_Renderers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::particles::CParticleFunctionRenderer*> m_Renderers;
            char m_Renderers[0x18]; // 0xa0            
            // metadata: MPropertySuppressField
            // m_Children has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::particles::ParticleChildrenInfo_t> m_Children;
            char m_Children[0x18]; // 0xb8            
            uint8_t _pad00d0[0xa8]; // 0xd0
            // metadata: MPropertySuppressField
            std::int32_t m_nFirstMultipleOverride_BackwardCompat; // 0x178            
            uint8_t _pad017c[0xdc]; // 0x17c
            // metadata: MPropertyStartGroup "+Collection Options"
            // metadata: MPropertyFriendlyName "initial particles"
            std::int32_t m_nInitialParticles; // 0x258            
            // metadata: MPropertyFriendlyName "max particles"
            std::int32_t m_nMaxParticles; // 0x25c            
            // metadata: MPropertyFriendlyName "group id"
            std::int32_t m_nGroupID; // 0x260            
            // metadata: MPropertyStartGroup "Bounding Box"
            // metadata: MPropertyFriendlyName "bounding box bloat min"
            // metadata: MVectorIsCoordinate
            Vector m_BoundingBoxMin; // 0x264            
            // metadata: MPropertyFriendlyName "bounding box bloat max"
            // metadata: MVectorIsCoordinate
            Vector m_BoundingBoxMax; // 0x270            
            // metadata: MPropertyFriendlyName "bounding box depth sort bias"
            float m_flDepthSortBias; // 0x27c            
            // metadata: MPropertyFriendlyName "sort override position CP"
            std::int32_t m_nSortOverridePositionCP; // 0x280            
            // metadata: MPropertyFriendlyName "infinite bounds - don't cull"
            bool m_bInfiniteBounds; // 0x284            
            // metadata: MPropertyStartGroup "Named Values"
            // metadata: MPropertyFriendlyName "Enable Named Values (EXPERIMENTAL)"
            bool m_bEnableNamedValues; // 0x285            
            uint8_t _pad0286[0x2]; // 0x286
            // metadata: MPropertyFriendlyName "Domain Class"
            // metadata: MPropertyAttributeChoiceName "particlefield_domain"
            // metadata: MPropertyAutoRebuildOnChange
            // metadata: MPropertySuppressExpr "!m_bEnableNamedValues"
            CUtlString m_NamedValueDomain; // 0x288            
            // metadata: MPropertySuppressField
            // m_NamedValueLocals has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::particleslib::ParticleNamedValueSource_t*> m_NamedValueLocals;
            char m_NamedValueLocals[0x18]; // 0x290            
            // metadata: MPropertyStartGroup "+Base Properties"
            // metadata: MPropertyFriendlyName "color"
            // metadata: MPropertyColorPlusAlpha
            Color m_ConstantColor; // 0x2a8            
            // metadata: MPropertyFriendlyName "normal"
            // metadata: MVectorIsCoordinate
            Vector m_ConstantNormal; // 0x2ac            
            // metadata: MPropertyFriendlyName "radius"
            // metadata: MPropertyAttributeRange "biased 0 500"
            float m_flConstantRadius; // 0x2b8            
            // metadata: MPropertyFriendlyName "rotation"
            float m_flConstantRotation; // 0x2bc            
            // metadata: MPropertyFriendlyName "rotation speed"
            float m_flConstantRotationSpeed; // 0x2c0            
            // metadata: MPropertyFriendlyName "lifetime"
            float m_flConstantLifespan; // 0x2c4            
            // metadata: MPropertyFriendlyName "sequence number"
            // metadata: MPropertyAttributeEditor "SequencePicker( 1 )"
            std::int32_t m_nConstantSequenceNumber; // 0x2c8            
            // metadata: MPropertyFriendlyName "sequence number 1"
            // metadata: MPropertyAttributeEditor "SequencePicker( 2 )"
            std::int32_t m_nConstantSequenceNumber1; // 0x2cc            
            // metadata: MPropertyStartGroup "Snapshot Options"
            std::int32_t m_nSnapshotControlPoint; // 0x2d0            
            uint8_t _pad02d4[0x4]; // 0x2d4
            // m_hSnapshot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSnapshot> m_hSnapshot;
            char m_hSnapshot[0x8]; // 0x2d8            
            // metadata: MPropertyStartGroup "Replacement Options"
            // metadata: MPropertyFriendlyName "cull replacement definition"
            // m_pszCullReplacementName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_pszCullReplacementName;
            char m_pszCullReplacementName[0x8]; // 0x2e0            
            // metadata: MPropertyFriendlyName "cull radius"
            float m_flCullRadius; // 0x2e8            
            // metadata: MPropertyFriendlyName "cull cost"
            float m_flCullFillCost; // 0x2ec            
            // metadata: MPropertyFriendlyName "cull control point"
            std::int32_t m_nCullControlPoint; // 0x2f0            
            uint8_t _pad02f4[0x4]; // 0x2f4
            // metadata: MPropertyFriendlyName "fallback replacement definition"
            // m_hFallback has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hFallback;
            char m_hFallback[0x8]; // 0x2f8            
            // metadata: MPropertyFriendlyName "fallback max count"
            std::int32_t m_nFallbackMaxCount; // 0x300            
            uint8_t _pad0304[0x4]; // 0x304
            // metadata: MPropertyFriendlyName "low violence definition"
            // m_hLowViolenceDef has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hLowViolenceDef;
            char m_hLowViolenceDef[0x8]; // 0x308            
            // metadata: MPropertyFriendlyName "reference replacement definition"
            // m_hReferenceReplacement has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hReferenceReplacement;
            char m_hReferenceReplacement[0x8]; // 0x310            
            // metadata: MPropertyStartGroup "Simulation Options"
            // metadata: MPropertyFriendlyName "pre-simulation time"
            float m_flPreSimulationTime; // 0x318            
            // metadata: MPropertyFriendlyName "freeze simulation after time"
            float m_flStopSimulationAfterTime; // 0x31c            
            // metadata: MPropertyFriendlyName "maximum time step"
            float m_flMaximumTimeStep; // 0x320            
            // metadata: MPropertyFriendlyName "maximum sim tick rate"
            float m_flMaximumSimTime; // 0x324            
            // metadata: MPropertyFriendlyName "minimum sim tick rate"
            float m_flMinimumSimTime; // 0x328            
            // metadata: MPropertyFriendlyName "minimum simulation time step"
            float m_flMinimumTimeStep; // 0x32c            
            // metadata: MPropertyFriendlyName "minimum required rendered frames"
            std::int32_t m_nMinimumFrames; // 0x330            
            // metadata: MPropertyFriendlyName "simulated on the GPU"
            // metadata: MPropertySuppressExpr "mod != hlx"
            // metadata: MPropertyAutoRebuildOnChange
            bool m_bIsGPUParticleSystem; // 0x334            
            uint8_t _pad0335[0x3]; // 0x335
            // metadata: MPropertyStartGroup "Performance Options"
            // metadata: MPropertyFriendlyName "minimum CPU level"
            std::int32_t m_nMinCPULevel; // 0x338            
            // metadata: MPropertyFriendlyName "minimum GPU level"
            std::int32_t m_nMinGPULevel; // 0x33c            
            // metadata: MPropertyFriendlyName "time to sleep when not drawn"
            float m_flNoDrawTimeToGoToSleep; // 0x340            
            // metadata: MPropertyFriendlyName "maximum draw distance"
            float m_flMaxDrawDistance; // 0x344            
            // metadata: MPropertyFriendlyName "start fade distance"
            float m_flStartFadeDistance; // 0x348            
            // metadata: MPropertyFriendlyName "maximum creation distance"
            float m_flMaxCreationDistance; // 0x34c            
            // metadata: MPropertyFriendlyName "minimum free particles to aggregate"
            std::int32_t m_nAggregationMinAvailableParticles; // 0x350            
            // metadata: MPropertyFriendlyName "aggregation radius"
            float m_flAggregateRadius; // 0x354            
            // metadata: MPropertyFriendlyName "batch particle systems (DO NOT USE)"
            // metadata: MParticleAdvancedField
            bool m_bShouldBatch; // 0x358            
            // metadata: MPropertyFriendlyName "Hitboxes fall back to render bounds"
            bool m_bShouldHitboxesFallbackToRenderBounds; // 0x359            
            // metadata: MPropertyFriendlyName "Hitboxes fall back to snapshot"
            bool m_bShouldHitboxesFallbackToSnapshot; // 0x35a            
            // metadata: MPropertyFriendlyName "Hitboxes fall back to collision hulls"
            bool m_bShouldHitboxesFallbackToCollisionHulls; // 0x35b            
            // metadata: MPropertyStartGroup "Rendering Options"
            // metadata: MPropertyFriendlyName "view model effect"
            // metadata: MPropertySuppressExpr "m_bScreenSpaceEffect"
            source2sdk::particles::InheritableBoolType_t m_nViewModelEffect; // 0x35c            
            // metadata: MPropertyFriendlyName "screen space effect"
            // metadata: MPropertySuppressExpr "m_nViewModelEffect == INHERITABLE_BOOL_TRUE"
            bool m_bScreenSpaceEffect; // 0x360            
            uint8_t _pad0361[0x7]; // 0x361
            // metadata: MPropertyFriendlyName "target layer ID for rendering"
            CUtlSymbolLarge m_pszTargetLayerID; // 0x368            
            // metadata: MPropertyFriendlyName "control point to disable rendering if it is the camera"
            std::int32_t m_nSkipRenderControlPoint; // 0x370            
            // metadata: MPropertyFriendlyName "control point to only enable rendering if it is the camera"
            std::int32_t m_nAllowRenderControlPoint; // 0x374            
            // metadata: MPropertyFriendlyName "sort particles (DEPRECATED - USE RENDERER OPTION)"
            // metadata: MParticleAdvancedField
            bool m_bShouldSort; // 0x378            
            uint8_t _pad0379[0x47]; // 0x379
            // metadata: MPropertySuppressField
            // m_controlPointConfigurations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::particles::ParticleControlPointConfiguration_t> m_controlPointConfigurations;
            char m_controlPointConfigurations[0x18]; // 0x3c0            
            uint8_t _pad03d8[0x68];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CParticleSystemDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::CParticleSystemDefinition) == 0x440);
    };
};
