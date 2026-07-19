#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/CRenderSkeleton.hpp"
#include "source2sdk/modellib/CSceneObjectData.hpp"
#include "source2sdk/modellib/DynamicMeshDeformParams_t.hpp"
namespace source2sdk
{
    namespace modellib
    {
        struct CBaseConstraint;
    };
};
namespace source2sdk
{
    namespace modellib
    {
        struct CRenderGroom;
    };
};

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x210
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CRenderMesh
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            // m_sceneObjects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<source2sdk::modellib::CSceneObjectData,1> m_sceneObjects;
            char m_sceneObjects[0xa8]; // 0x10            
            // m_constraints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::modellib::CBaseConstraint*> m_constraints;
            char m_constraints[0x10]; // 0xb8            
            source2sdk::modellib::CRenderSkeleton m_skeleton; // 0xc8            
            uint8_t _pad0118[0xbc]; // 0x118
            bool m_bUseUV2ForCharting; // 0x1d4            
            bool m_bEmbeddedMapMesh; // 0x1d5            
            uint8_t _pad01d6[0x22]; // 0x1d6
            source2sdk::modellib::DynamicMeshDeformParams_t m_meshDeformParams; // 0x1f8            
            uint8_t _pad0204[0x4]; // 0x204
            source2sdk::modellib::CRenderGroom* m_pGroomData; // 0x208            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CRenderMesh, m_sceneObjects) == 0x10);
        static_assert(offsetof(source2sdk::modellib::CRenderMesh, m_constraints) == 0xb8);
        static_assert(offsetof(source2sdk::modellib::CRenderMesh, m_skeleton) == 0xc8);
        static_assert(offsetof(source2sdk::modellib::CRenderMesh, m_bUseUV2ForCharting) == 0x1d4);
        static_assert(offsetof(source2sdk::modellib::CRenderMesh, m_bEmbeddedMapMesh) == 0x1d5);
        static_assert(offsetof(source2sdk::modellib::CRenderMesh, m_meshDeformParams) == 0x1f8);
        static_assert(offsetof(source2sdk::modellib::CRenderMesh, m_pGroomData) == 0x208);
        
        static_assert(sizeof(source2sdk::modellib::CRenderMesh) == 0x210);
    };
};
