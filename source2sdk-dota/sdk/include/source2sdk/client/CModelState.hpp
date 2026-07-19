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
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x2b0
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
            uint8_t _pad00f5[0x1b]; // 0xf5
            bool m_bClientClothCreationSuppressed; // 0x110            
            uint8_t _pad0111[0xef]; // 0x111
            std::uint8_t m_nAnimStateNoInterpSerialNumber; // 0x200            
            uint8_t _pad0201[0x7]; // 0x201
            std::uint64_t m_MeshGroupMask; // 0x208            
            uint8_t _pad0210[0x48]; // 0x210
            // m_nBodyGroupChoices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::int32_t> m_nBodyGroupChoices;
            char m_nBodyGroupChoices[0x18]; // 0x258            
            uint8_t _pad0270[0x32]; // 0x270
            std::int8_t m_nIdealMotionType; // 0x2a2            
            std::int8_t m_nForceLOD; // 0x2a3            
            std::int8_t m_nClothUpdateFlags; // 0x2a4            
            uint8_t _pad02a5[0xb];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CModelState, m_hModel) == 0xa0);
        static_assert(offsetof(source2sdk::client::CModelState, m_ModelName) == 0xa8);
        static_assert(offsetof(source2sdk::client::CModelState, m_pVPhysicsAggregate) == 0xe0);
        static_assert(offsetof(source2sdk::client::CModelState, m_flRootBoneOffset_x) == 0xe8);
        static_assert(offsetof(source2sdk::client::CModelState, m_flRootBoneOffset_y) == 0xec);
        static_assert(offsetof(source2sdk::client::CModelState, m_flRootBoneOffset_z) == 0xf0);
        static_assert(offsetof(source2sdk::client::CModelState, m_nRootBoneOffsetResetSerialNumber) == 0xf4);
        static_assert(offsetof(source2sdk::client::CModelState, m_bClientClothCreationSuppressed) == 0x110);
        static_assert(offsetof(source2sdk::client::CModelState, m_nAnimStateNoInterpSerialNumber) == 0x200);
        static_assert(offsetof(source2sdk::client::CModelState, m_MeshGroupMask) == 0x208);
        static_assert(offsetof(source2sdk::client::CModelState, m_nBodyGroupChoices) == 0x258);
        static_assert(offsetof(source2sdk::client::CModelState, m_nIdealMotionType) == 0x2a2);
        static_assert(offsetof(source2sdk::client::CModelState, m_nForceLOD) == 0x2a3);
        static_assert(offsetof(source2sdk::client::CModelState, m_nClothUpdateFlags) == 0x2a4);
        
        static_assert(sizeof(source2sdk::client::CModelState) == 0x2b0);
    };
};
