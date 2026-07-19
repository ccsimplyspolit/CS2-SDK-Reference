#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
namespace source2sdk
{
    namespace vphysics2
    {
        struct IPhysAggregateInstance;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x290
        // Has VTable
        // Construct allowed
        // Construct disallowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModelState
        {
        public:
            uint8_t _pad0000[0xa0]; // 0x0
            // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_hModel;
            char m_hModel[0x8]; // 0xa0            
            CUtlSymbolLarge m_ModelName; // 0xa8            
            uint8_t _pad00b0[0x30]; // 0xb0
            // metadata: MPhysPtr
            source2sdk::vphysics2::IPhysAggregateInstance* m_pVPhysicsAggregate; // 0xe0            
            float m_flRootBoneOffset_x; // 0xe8            
            float m_flRootBoneOffset_y; // 0xec            
            float m_flRootBoneOffset_z; // 0xf0            
            std::uint8_t m_nRootBoneOffsetResetSerialNumber; // 0xf4            
            bool m_bClientClothCreationSuppressed; // 0xf5            
            uint8_t _pad00f6[0xea]; // 0xf6
            std::uint8_t m_nAnimStateNoInterpSerialNumber; // 0x1e0            
            uint8_t _pad01e1[0x7]; // 0x1e1
            std::uint64_t m_MeshGroupMask; // 0x1e8            
            uint8_t _pad01f0[0x48]; // 0x1f0
            // m_nBodyGroupChoices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::int32_t> m_nBodyGroupChoices;
            char m_nBodyGroupChoices[0x18]; // 0x238            
            uint8_t _pad0250[0x32]; // 0x250
            std::int8_t m_nIdealMotionType; // 0x282            
            std::int8_t m_nForceLOD; // 0x283            
            std::int8_t m_nClothUpdateFlags; // 0x284            
            uint8_t _pad0285[0xb];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CModelState, m_hModel) == 0xa0);
        static_assert(offsetof(source2sdk::server::CModelState, m_ModelName) == 0xa8);
        static_assert(offsetof(source2sdk::server::CModelState, m_pVPhysicsAggregate) == 0xe0);
        static_assert(offsetof(source2sdk::server::CModelState, m_flRootBoneOffset_x) == 0xe8);
        static_assert(offsetof(source2sdk::server::CModelState, m_flRootBoneOffset_y) == 0xec);
        static_assert(offsetof(source2sdk::server::CModelState, m_flRootBoneOffset_z) == 0xf0);
        static_assert(offsetof(source2sdk::server::CModelState, m_nRootBoneOffsetResetSerialNumber) == 0xf4);
        static_assert(offsetof(source2sdk::server::CModelState, m_bClientClothCreationSuppressed) == 0xf5);
        static_assert(offsetof(source2sdk::server::CModelState, m_nAnimStateNoInterpSerialNumber) == 0x1e0);
        static_assert(offsetof(source2sdk::server::CModelState, m_MeshGroupMask) == 0x1e8);
        static_assert(offsetof(source2sdk::server::CModelState, m_nBodyGroupChoices) == 0x238);
        static_assert(offsetof(source2sdk::server::CModelState, m_nIdealMotionType) == 0x282);
        static_assert(offsetof(source2sdk::server::CModelState, m_nForceLOD) == 0x283);
        static_assert(offsetof(source2sdk::server::CModelState, m_nClothUpdateFlags) == 0x284);
        
        static_assert(sizeof(source2sdk::server::CModelState) == 0x290);
    };
};
